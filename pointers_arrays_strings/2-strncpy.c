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
	char *start = dest;						//@start points to the beginning value of dest
	int index = 0;

	while (*src != '\0' && index < n)		//As long as src value is different from NULL char AND the index didnt reach the n bytes condition
	{
		*dest = *src;
		dest++;								//They all move 1 block and the value pointed by dest will be equal to the one is src
		src++;
		index++;
	}
	while (index < n)						//This serves to fill empty spaces with NULL if src string is shorter than dest 
	{
		*dest = '\0';
		dest++;
		index++;
	}
	return (start);							//Prints the string starting from the first value of dest, now with the updated string
}
