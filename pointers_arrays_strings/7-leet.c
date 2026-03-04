#include "main.h"

/**
 * *leet -Function that converts letters to leet numbers
 * @str: Variable that stores the string
 * Return: start (Prints the leet numbers)
 */
char *leet(char *str)
{
	char *start = str
	int dedex;
	char letters[] = "aeotlAEOTL";
	char numbers[] = "4307143071";

	while (*str)
	{
		for (dedex = 0; letters[dedex] != '\0'; dedex++)
		{
			if (*str == letters[dedex])
			{
				*str = numbers[dedex];
			}
		}
	str++;
	}
	return (start)
}
