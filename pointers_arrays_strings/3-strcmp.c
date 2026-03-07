#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: Variable that stores the first string
 * @s2: Variable that stores the second string
 * Return: *s1 -s2 (Result that compares)
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))			//As long as there is a value in s1 and s2 still has some as well
	{
		s1++;							//They both move 1 block
		s2++;
	}
	return (*s1 - *s2);					//Returns the difference between both strings
}
