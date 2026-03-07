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

	while (*s)					//As long as there is a value in the s string
	{
		a = accept;				//Variable a stores the values in the accept string

		while (*a)				//Loops in the a(ccept) string 
		{
			if (*s == *a)		//If it finds the same character in s and a
				return (s);		//Prints the character found
			a++;				//Moves 1 block
		}
		s++;					//Moves 1 block (before searching again in the a string)
	}

	return (NULL);				//If nothing is found, returns NULL
}
