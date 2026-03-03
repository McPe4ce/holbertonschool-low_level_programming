#include "main.h"

/**
 * print_rev - Prints the charaters backwards
 * How this works: You create an index variable that will count until
 * you reach \0. When you do u decrease by one and then
 * start printing backwards until you reach back 0.
 * @s: Variable that stores the string
 */

void print_rev(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		index++;
	}
	index--;

	while (index >= 0)
	{
		_putchar(s[index]);
		index--;
	}
	_putchar('\n');
}
