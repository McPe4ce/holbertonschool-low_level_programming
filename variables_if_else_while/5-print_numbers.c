#include <stdio.h>
/**
* main - Prints the numbers from 0 to 9
* Return: 0 (Success)
*/
int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
		printf("%d", numbers);

	putchar('\n');
	return (0);
}
