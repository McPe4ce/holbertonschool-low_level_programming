#include "main.h"

/**
 * _string_toupper - Converts lowercase characters with uppercase
 * TIPS in ASCII, lower letters are separated by 32 chars from
 * upper letters. Thats why we substract 'a' from 'A' to find 
 * the value of pSTR.
 * @str: Variable that stores the string of characters
 * Return: str (Prints the string in uppercase)
 */
char *string_toupper(char *str)
{
	char *pSTR = str;

	while (*str)
	{
		if (*pSTR >= 'a' && *pSTR <= 'z')
		*pSTR = *pSTR - ('a' - 'A');

		pSTR++;

	}
	return (str);
}
