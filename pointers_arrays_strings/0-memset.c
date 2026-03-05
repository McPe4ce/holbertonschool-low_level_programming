#include "main.h"

/**
 * *_memset - Function that fills memory with a character
 * @s: Variable that will be filled with b
 * @b: Variable that stores the char that will be put in mem
 * @n: Variable that says how many times it should be done
 * Return: s (Prints the character)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index = 0;

	while (index < n)
	{
		s[index] = b;
		index++;
	}
	return (s);
}
