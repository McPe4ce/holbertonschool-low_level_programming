#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: Times the table will be printed
 */
void print_times_table(int n)
{
	int index;
	int coldex;
	int multi;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (index = 0; index <= n; index++)
	{
		for (coldex = 0; coldex <= n; coldex++)
		{
			multi = index * coldex;
			if (coldex != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (multi < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (multi < 100)
				{
					_putchar(' ');
				}
			}
			if (multi >= 100)
			{
				_putchar((multi / 100) + '0');
				_putchar(((multi / 10) % 10) + '0');
				_putchar((multi % 10) + '0');
			}
			else if (multi >= 10)
			{
				_putchar((multi / 10) + '0');
				_putchar((multi % 10) + '0');
			}
			else
			{
				_putchar(multi + '0');
			}
		}
		_putchar('\n');
	}
}
