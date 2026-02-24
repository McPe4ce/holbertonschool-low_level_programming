#include <stdio.h>


/**
* main - Prints a script that displays all the possible outcomes
* of two digit combo
* Return: 0 (Success)
*/

int main(void)
{
	int combo;

	for (combo = 0; combo <= 9; combo++)
	{
		if (combo != 0)
		putchar(' ');
		putchar('0' + combo);
		if (combo != 9)
		putchar(',');
	}
	putchar('\n');
	return (0);
}
