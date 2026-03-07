#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to search in
 * @c: character to locate
 *
 * Return: pointer to first occurrence of c, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')			//As long as the value pointed by s isnt a NULL char
	{
		if (*s == c)			//If the value pointed by s is a character
		{
			return (s);			//Prints the value pointed by s
		}
	s++;						//Otherwise it will move 1 block
	}
	if (c == '\0')				//But IF there are no characters 
	{
		return (s);				//Return NULL
	}
	return (0);
}
