#include "main.h"

/**
 * *cap_string - Converts the string into upper case
 * @str: Variable that holds the string
 * Return: start (Prints the string)
 */
char *cap_string(char *str)
{
	char *start = str;
	int upperCUT;

	while (*str != '\0')
	{
		if (str >= 'a' && str <= 'Z')
		{
		*str -= ('a' - 'A');
		upperCUT = 0;
		}
		else if
			(*str == ' ' ||
			*str == '\t' ||
			*str == '\n' ||
			*str == ',' ||
			*str == '.' ||
			*str == '!' ||
			*str == '?' ||
			*str == '"' ||
			*str == '()' ||
			*str == ')' ||
			*str == '{' ||
			*str == '}')
		{
			upperCUT = 1;
		}
		else
		{
		upperCUT = 0;
		}
		str++;
	}
	return (start);
}
