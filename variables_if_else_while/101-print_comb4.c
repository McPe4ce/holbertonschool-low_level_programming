#include <stdio.h>

/**
 * main - Function that prints all the possible combinations
 * of 3 numbers
 * Return: 0
 */
int main(void)
{
	int first_num;
	int sec_num;
	int third_num;

	for (first_num = 0; first_num <= 9; first_num++)
	{
		for (sec_num = first_num + 1; sec_num <= 9; sec_num++)
		{
			for (third_num = sec_num + 1; third_num <= 9; third_num++)
			{
				putchar(first_num + '0');
				putchar(sec_num + '0');
				putchar(third_num + '0');

				if (!(first_num == 7 && sec_num == 8 && third_num == 9))
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
