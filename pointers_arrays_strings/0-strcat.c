#include "main.h"

/**
 * _strcat - Assembles a string in another, and sets the NULL char.
 * @dest: Array that receives the string
 * @src: Variable that has the string
 * Return: dest (Prints the string)
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;							// Index that will run in the @src string
	int dedex = 0;							// Index that will run in the @dest string

	while (dest[dedex] != '\0')				//As long as dedex didnt reach the NULL char
	{
		dedex++;							//Dedex will move 1 block (to make space?)
	}

	while (src[index] != '\0')				//As long as index didnt reach the NULL char
	{
		dest[dedex] = src[index];			//The value pointed by dedex in dest, will be equal to the one is src
		dedex++;							//They both move 1 block
		index++;
	}
	dest[dedex] = '\0';						//When index reached the NULL char, place the NULL char in dest

	return (dest);
}
