#include "main.h"
/**
* times_table - function definition for the required prototype.
*/

void times_table(void)
{
	int i, j, p;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			p = i * j;
			if (j == 0)
			{
				if (p >= 10)
				{
					_putchar(p / 10 + '0');
					_putchar(p % 10 + '0');
				}
				else
				{
					_putchar(p + '0');
				}
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (p < 10)
					_putchar(' ');
				if (p >= 10)
				{
					_putchar(p / 10 + '0');
					_putchar(p % 10 + '0');
				}
				else
				{
					_putchar(p + '0');
				}
			}
		}
		_putchar('\n');
	}
}
