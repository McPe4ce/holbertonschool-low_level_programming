#include "main.h"

/**
 * _strcat - Bricks two strings together until it reaches n bytes
 * @dest: String that will receive the src string
 * @src: Variable that stores the string
 * Return: start (prints the string)
 */
char *_strncat(char *dest, char *src, int n)
{
	char *start = dest;
	int index = 0;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && index < n)
	{
		*dest = *src;
		src++;
		dest++;
		index++;
	}
	*dest = '\0';
	return (start);
}
