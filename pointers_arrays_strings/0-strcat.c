#include "main.h"

/**
 * _strcat - Assembles a string in another, and sets the NULL char.
 * @dest: Array that receives the string
 * @src: Variable that has the string
 * Return: dest (Prints the string)
 */

char *_strcat(char *dest, char *src)
{
	int index = 0

	while (dest[index] != '\0')
	{
		index++;
	}

	while (src[index] != '\0')
	{
		dest[index] = src[index];
		dest++;
		src++;
	}
	dest[index] != '\0';
	return (dest);
}
