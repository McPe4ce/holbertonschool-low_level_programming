#include <stdio.h>

/**
*main - function counter that prints Fizzbuzz
* Return: 0 (Printed the code)
*/

int main(void)
{
	int multi;

	for (multi = 1; multi <= 100; multi++)
	{
		if (multi % 3 == 0 && multi % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (multi % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (multi == 100)
		{
			printf("Buzz");
		}
		else if (multi % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		printf("%d ", multi);
	}
	printf("\n");
	return (0);
}
