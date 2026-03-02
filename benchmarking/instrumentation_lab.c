#include <stdio.h>
#include <time.h>

#define DATASET_SIZE 50000
#define SEED_VALUE 42u

static int dataset[DATASET_SIZE];

static unsigned int next_value(unsigned int *state)
{
    *state = (*state * 1103515245u) + 12345u;
    return *state;
}

static void build_dataset(void)
{
    unsigned int state;
    int i;

    state = SEED_VALUE;

    for (i = 0; i < DATASET_SIZE; i++)
        dataset[i] = (int)(next_value(&state) % 100000);
}

static void process_dataset(void)
{
    int i;
    int v;

    for (i = 0; i < DATASET_SIZE; i++)
    {
        v = dataset[i];
        v = (v * 3) + (v / 7) - (v % 11);
        if (v < 0)
            v = -v;
        dataset[i] = v;
    }
}

static unsigned long reduce_checksum(void)
{
    unsigned long sum;
    int i;

    sum = 0;
    for (i = 0; i < DATASET_SIZE; i++)
        sum = (sum * 131ul) + (unsigned long)dataset[i];

    return sum;
}

/**int main(void)
{
    unsigned long checksum;

    clock_t start;
    clock_t end;
    double elapsed_a;
    double elapsed_b;
    double elapsed_c;
    double elapsed_d;
    unsigned int result_a;
    unsigned int result_b;
    unsigned int result_c;
    int result_d;

    build_dataset();
    process_dataset();
    checksum = reduce_checksum();

    start = clock();
    result_a = next_value;
    end = clock();
    elapsed_a = (double)(end - start) / (double)CLOCKS_PER_SEC;

    start = clock();
    result_b = build_dataset;
    end = clock();
    elapsed_b = (double)(end - start) / (double)CLOCKS_PER_SEC;

    start = clock();
    result_c = process_dataset;
    end = clock();
    elapsed_c = (double)(end - start) / (double)CLOCKS_PER_SEC;

    start = clock();
    result_d = checksum;
    end = clock();
    elapsed_d = (double)(end - start) / (double)CLOCKS_PER_SEC;

    if (checksum == 0ul)
        printf("impossible\n");
    
        printf("TOTAL seconds: %.6f\n", next_value);
        printf("BUILD_DATA seconds: %.6f\n", build_dataset);
        printf("PROCESS seconds: %.6f\n", process_dataset);
        printf("REDUCE seconds: %.6f\n", checksum);

    return 0;
}
*/

int main(void)
{
    unsigned long checksum;

    clock_t total_start, total_end;
    clock_t build_start, build_end;
    clock_t process_start, process_end;
    clock_t reduce_start, reduce_end;

    double total_seconds;
    double build_seconds;
    double process_seconds;
    double reduce_seconds;

    total_start = clock();

    build_start = clock();
    build_dataset();
    build_end = clock();

    process_start = clock();
    process_dataset();
    process_end = clock();

    reduce_start = clock();
    checksum = reduce_checksum();
    reduce_end = clock();

    total_end = clock();

    if (checksum == 0ul)
        printf("impossible\n");

    build_seconds = (double)(build_end - build_start) / CLOCKS_PER_SEC;
    process_seconds = (double)(process_end - process_start) / CLOCKS_PER_SEC;
    reduce_seconds = (double)(reduce_end - reduce_start) / CLOCKS_PER_SEC;
    total_seconds = (double)(total_end - total_start) / CLOCKS_PER_SEC;

    printf("TOTAL seconds: %.6f\n", total_seconds);
    printf("BUILD_DATA seconds: %.6f\n", build_seconds);
    printf("PROCESS seconds: %.6f\n", process_seconds);
    printf("REDUCE seconds: %.6f\n", reduce_seconds);

    return 0;
}