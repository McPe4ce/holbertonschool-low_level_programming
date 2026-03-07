#include "main.h"

/**
 * *leet -Function that converts letters to leet numbers
 * @str: Variable that stores the string
 * Return: start (Prints the leet)
 */

char *leet(char *str)
{
	char *start = str;
	int dedex;
	char letters[] = "aeotlAEOTL";
	char numbers[] = "4307143071";

	while (*str)											//As long as str points a value that isnt NULL
	{
		for (dedex = 0; letters[dedex] != '\0'; dedex++)	//Dedex starts at 0, as long as the value in string isnt NULL, move 1 block
		{
			if (*str == letters[dedex])						//If the character pointed in str is the same as the one in letters
				*str = numbers[dedex];						//Convert it to the one of the same value in numbers
		}
		str++;
	}

	return (start);
}
