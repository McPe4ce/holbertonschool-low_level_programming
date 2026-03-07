#include "main.h"

/**
 * _strlen - Function that prints the total of characters in a string
 * @s: Varaible that stores the string
 * Return: taille (Success)
 */
int _strlen(char *s)
{
	int taille = 0;			//Variable that stores the lenght of a string

	while (*s != '\0')		//As long as the value pointed by s isnt a NULL char
{
	taille++;				//They both move 1 block
	s++;
}
return (taille);			//When it reached the NULL character, returns the lenght
}
