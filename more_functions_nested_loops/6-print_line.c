#include "main.h"

/**
* print_line - function that prints a _ to form a line
* @n: variable that defines how much lines will be drawn
*/

void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
