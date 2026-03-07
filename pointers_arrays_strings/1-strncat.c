#include "main.h"

/**
 * _strncat - Bricks two strings together until it reaches n bytes
 * @dest: String that will receive the src string
 * @src: Variable that stores the string
 * @n: Variable that holds the value to stop the string
 * Return: start (prints the string)
 */
char *_strncat(char *dest, char *src, int n)
{
	char *start = dest;						//@start points to the beginning value of dest
	int index = 0;

	while (*dest != '\0')					//As long as dest value is different from NULL char
	{
		dest++;								//Moves 1 block, this gives memory space to welcome to src string
	}
	while (*src != '\0' && index < n)		//As long as src value is different from NULL char AND the index didnt reach the n bytes condition
	{
		*dest = *src;
		src++;
		dest++;								//They all move 1 block and the value pointed by dest will be equal to the one is src
		index++;
	}
	*dest = '\0';							//Places the NULL character once all is done
	return (start);							//Prints the string starting from the first value of dest, now with the updated string
}
