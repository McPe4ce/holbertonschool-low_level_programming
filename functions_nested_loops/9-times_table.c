#include "main.h"
/*
 * times_table.c
 *
 * This file implements `times_table(void)`, intended to print the 9-times
 * table starting from 0. Line-by-line explanation:
 *
 * #include "main.h"
 *   - pulls in the prototype for `_putchar` and other shared declarations.
 *
 * times_table - function definition for the required prototype.
 *
 * int i, j, p;
 *   - loop counters representing the two multiplicands (rows and columns).
 *
 * for (i = 0; i <= 9; i++)
 *   - outer loop: iterate the first multiplicand from 0 through 9 (each row).
 *
 * for (j = 0; j <= 9; j++)
 *   - inner loop: iterate the second multiplicand from 0 through 9
 * (each column).
 *
 * p = i * j;
 *   - calculates the product of the two multiplicands.
 *
 * What's missing to make the function fully correct:
 *   - handle two-digit products by printing the tens digit
 *		then the units digit
 *     (e.g. for 12 print '1' then '2').
 *   - print separators (comma and space) between values and
 *		a newline at the
 *     end of each row so the output forms a proper table.
 *   - currently there is no formatting or newline, so output
 *		would run together.
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
