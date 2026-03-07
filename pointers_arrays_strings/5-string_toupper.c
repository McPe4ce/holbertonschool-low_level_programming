#include "main.h"

/**
 * string_toupper - Converts lowercase characters with uppercase
 * TIPS in ASCII, lower letters are separated by 32 chars from
 * upper letters. Thats why we substract 'a' from 'A' to find
 * the value of pSTR.
 * @str: Variable that stores the string of characters
 * Return: str (Prints the string in uppercase)
 */
char *string_toupper(char *str)
{
	char *start = str;						//Variable that will stores the value at the beginning of the string

	while (*str)							//As long as str points to a value
	{
		if (*str >= 'a' && *str <= 'z')		//If the value pointed is a character in lowercase
			*str -= ('a' - 'A');			//In ASCII each lowercase letter is separated by 32 from its uppercase character
											//So it will print the uppercase (ex: the value pointed by str is: 'f'. In ASCII 'A' = 65 and 'a' = 97,
											//Subtracts 'f' (in ascii 102) - 32 = 'F' (in ascii 70)
		
		str++;
	}

	return (start);
}
