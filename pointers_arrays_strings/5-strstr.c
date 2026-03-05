#include "main.h"
#include <stddef.h>

/**
 * _strstr - Function that locates a string in a string
 * @needle: variable that stores the string that should be found
 * @haystack: variable that stores the array
 * Return: &haystack[index] (Prints needle)
 */
char *_strstr(char *haystack, char *needle)
{
	int index;
	int dedex;

	if (needle[0] != '\0')
	{
		return (haystack);
	}

	for (index = 0; haystack[index] != '\0'; index++)
	{
		for (dedex = 0; needle[dedex] != '\0'; dedex++)
		{
			if (haystack[index + dedex] != needle[index])
			{
				break;
			}
		}
		if (needle[index] == '\0')
		{
			return (&haystack[index]);
		}
	}
	return (NULL);
}
