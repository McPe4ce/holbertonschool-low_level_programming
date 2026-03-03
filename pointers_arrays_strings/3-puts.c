#include "main.h"

/**
 * _puts - Prints a string using pointers
 * @str: variable that stores the string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
