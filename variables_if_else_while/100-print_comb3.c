#include <stdio.h>

/**
 * main - Function that prints all the possible combinations
 * of 2 numbers
 * Return: 0
 */
int main(void)
{
	int first_num;
	int sec_num;

	for (first_num = 0; first_num <= 9; first_num++)
	{
		for (sec_num = first_num + 1; sec_num <= 9; sec_num++)
		{
			if (first_num != sec_num)
			{
				putchar(first_num + '0');
				putchar(sec_num + '0');

				if (!(first_num == 8 && sec_num == 9))
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
