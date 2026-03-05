#include "main.h"

/**
 * _strspn - Counts how many characters from a string are in another
 * @s: stores the first string
 * @accept: Stores the string that has the valid characters
 * Return: counting (The number that shows how many of them there is)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int counting;
	char *a;

	while (*s != '\0')
	{
		a = accept;

		while (*a != '\0')
		{
		if (*s == *a)
		{
			break;
		}
		a++;
		}
		if (*a == '\0')
		{
			break;
		}

		counting++;
		s++;
	}
	return (counting);
}
