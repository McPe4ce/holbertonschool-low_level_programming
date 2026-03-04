#include "main.h"

/**
 * _strcat - Assembles a string in another, and sets the NULL char.
 * @dest: Array that receives the string
 * @src: Variable that has the string
 * Return: dest (Prints the string)
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dedex = 0;

	while (dest[dedex] != '\0')
	{
		dedex++;
	}

	while (src[index] != '\0')
	{
		dest[dedex] = src[index];
		dedex++;
		index++;
	}
	dest[dedex] = '\0';
	
	return (dest);
}
