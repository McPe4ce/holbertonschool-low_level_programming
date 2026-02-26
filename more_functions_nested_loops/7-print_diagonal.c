#include "main.h"

/**
*print_diagonal - Script that prints a diagonal in the terminal
* @n: Variable that decides how many times i should print /
*/

void print_diagonal(int n)
{
	int dialga = 0;
	int space;

	if (n > 0)
	{
		while (dialga < n)
		{
			for (space = 0; space < dialga; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			dialga = dialga + 1;
		}
	}
	else
	_putchar('\n');
}
