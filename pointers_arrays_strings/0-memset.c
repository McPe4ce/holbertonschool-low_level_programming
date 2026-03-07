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
	unsigned int index = 0;					//Unsigned because @n can be negative

	while (index < n)						//As long as index doesnt reach @n 
	{
		s[index] = b;						//The character @b will fill @s 
		index++;							// Index will move 1 block
	}
	return (s);
}
