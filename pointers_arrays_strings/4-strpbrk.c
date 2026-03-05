#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Function that searches for a series of bytes in
 * a string
 * @s: Variable that stores the string
 * @accept: Variable that has the valid characters
 * Return: NULL (if there isnt characters)
 * s (if success)
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s)
	{
		a = accept;

		while (*a)
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}

	return (NULL);
}
