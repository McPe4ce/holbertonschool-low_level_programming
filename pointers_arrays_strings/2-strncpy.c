#include "main.h"

/**
 * _strncpy - Copies a string until it reaches n bytes
 * @dest: Variable that will receive the src string
 * @src: Variable that stores the string
 * @n: Vlue that will stop the string from being copied
 * Return: dest (Prints the string)
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest
	int index = 0;

	while (*src != '\0' && index < n)
	{
		*dest = *src;
		dest++;
		src++;
		index++;
	}
	while (index < n)
	{
		*dest = '\0';
		dest++;
		index++;
	}
	*dest = '\0';
	return (dest);
}
