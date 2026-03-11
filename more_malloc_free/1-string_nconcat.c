#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings in a newly allocated memory
 * @s1: String 1
 * @s2: String 2
 * @n: number of bytes used from s2
 * Return: str (Success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int s1_lenght = 0;
	int s2_lenght = 0;
	int index, dedex, strlength;
	char *str;
	
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[s1_lenght] != '\0')
	{
		s1_lenght++;
	}
	while (s2[s2_lenght] != '\0')
	{
		s2_lenght++;
	}
	if (n < s2_lenght)
	{
		strlength = s1_lenght + n;
	}
	else
		strlength = s1_lenght + s2_lenght;
	
	str = malloc(sizeof(char) * (strlength + 1));
	{
		if (str == NULL)
		{
			return (NULL);
		}
	}
	for (index = 0; index < s1_lenght; index++)
	{
		str[index] = s1[index];
	}
	for (dedex = 0; dedex < (strlength - s1_lenght); dedex++)
	{
		str[s1_lenght + dedex];
	}
	str[strlength] = '\0';
	return (str);
}
