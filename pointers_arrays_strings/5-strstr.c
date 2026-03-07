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

	if (needle[0] == '\0')										// Check if the needle is an empty string
	{
		return (haystack);										// If needle is empty, return haystack
	}

	for (index = 0; haystack[index] != '\0'; index++)			//Index starts at 0, as long as the value pointed by haystack is different than NULL, move 1 block
	{
		for (dedex = 0; needle[dedex] != '\0'; dedex++)			//Dedex starts at 0, as long as the value pointed by needle is different than NULL, move 1 block
		{
            if (haystack[index + dedex] != needle[dedex])		//If characters don't match, break out of loop
			{
				break;
			}
		}
		if (needle[dedex] == '\0')                				//If we reached end of needle, substring found
		{
			return (&haystack[index]);        					//Return pointer to start of substring in haystack
		}
	}
	return (NULL);
}
