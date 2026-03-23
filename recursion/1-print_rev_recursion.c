#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: Stores the string
 * Here it will reach the NULL char
 * And then print the characters
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
