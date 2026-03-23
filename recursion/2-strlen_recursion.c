#include "main.h"

/**
 * _strlen_recursion - Prints the size of a string
 * @s: Stores the string
 * Return: Size of the string (Success)
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
