#include "main.h"

/**
 * _strspn - Counts how many characters from a string are in another
 * @s: stores the first string
 * @accept: Stores the string that has the valid characters
 * Return: counting (The number that shows how many of them there is)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *a;

	while (*s)				//As long as s points a value
	{
		a = accept;			//A stores the base values that are in accept string

		while (*a)			//Loops in the a(ccept) string
		{
			if (*s == *a)	//If it finds the same character in s and a
				break;		//Exit the loop
			a++;			//Move 1 block
		}

		if (*a == '\0')		//If there are no characters matching, exits the loop
			break;

		count++;			//Moves 1 block
		s++;
	}

	return (count);			//When it reached the end of s, prints how many similar char are in it
}
