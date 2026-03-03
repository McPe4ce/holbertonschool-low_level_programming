#include "main.h"

/**
 * _strlen - Function that prints the total of characters in a string
 * @s: Varaible that stores the string
 * Return: taille (Success)
 */
int _strlen(char *s)
{
	int taille = 0;

	while (*s != '\0')
{
	taille++;
	s++;
}
return (taille);
}
