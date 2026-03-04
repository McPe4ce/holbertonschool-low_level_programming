#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: Variable that stores the first string
 * @s2: Variable that stores the second string
 * Return: *s1 -s2 (Result that compares)
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 = '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
