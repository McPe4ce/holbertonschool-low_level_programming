#include "main.h"

/**
 * _strcpy - copies the string pointed to dest
 * @dest: Buffer that receives the string in the memory
 * @src: Variable that stores the string that will be copied
 * Return: dest (Displays the string copied)
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index] != '\0')
	{
		src[index] = dest[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
