#include "main.h"

/**
 * *_memcpy - Function that copies a memory area
 * @dest: variable that will store where we receive
 * the memory area src
 * @src: The memory we copy in dest
 * @n: How many bytes of memory will be given
 * Return: start (Prints the result in the memory)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;				//@start points to the beginning value of dest

	while (n > 0)					//As long as n didnt reach 0, we keep giving memory space, copied from src
	{
		*dest = *src;				//The value pointed by dest will be equal each time to the one pointed by src
		dest++;
		src++;						//They both move 1 block
		n--;						//@n decreases
	}
	return (start);					//Prints the string starting from the first value of dest, now with the updated string
}
