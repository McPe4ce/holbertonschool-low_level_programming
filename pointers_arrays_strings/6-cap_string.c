#include "main.h"

/**
 * *cap_string - Converts the string into upper case
 * @str: Variable that holds the string
 * Return: start (Prints the string)
 */
char *cap_string(char *str)
{
	char *start = str; 					//Pointer to start of string
	int upperCUT = 1; 					//Flag to capitalize next letter

	while (*str != '\0') 				//Loop through string
	{
		if (*str >= 'a' && *str <= 'z' && upperCUT) 				//If lowercase and flag set
		{
		*str -= ('a' - 'A'); 										//Convert to uppercase
		upperCUT = 0; 												//Reset flag
		}
		else if														//Checks for separators
			(*str == ' ' ||
			*str == '\t' ||
			*str == '\n' ||
			*str == ',' ||
			*str == '.' ||
			*str == '!' ||
			*str == '?' ||
			*str == '"' ||
			*str == '(' ||
			*str == ')' ||
			*str == '{' ||
			*str == '}')
		{
			upperCUT = 1; 											//Set flag to capitalize next
		}
		else 														//Any other character
		{
		upperCUT = 0; 												//Reset flag
		}
		str++; 														//Move to next character
	}
	return (start);
}
