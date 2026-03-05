#include "main.h"

/**
 * *_memcpy - Function that copies a memory area
 * @dest: variable that will store where we receive
 * the memory area src
 * @src: The memory we copy in dest
 * @n: How many bytes of memory will be given
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (start);
}
