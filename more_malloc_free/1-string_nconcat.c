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
	unsigned int s1_length = 0, s2_length = 0, i, j;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_length] != '\0')
		s1_length++;
	while (s2[s2_length] != '\0')
		s2_length++;

	if (n < s2_length)
		s2_length = n;

	str = malloc(sizeof(char) * (s1_length + s2_length + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < s1_length; i++)
		str[i] = s1[i];
	for (j = 0; j < s2_length; j++)
		str[s1_length + j] = s2[j];
	str[s1_length + s2_length] = '\0';
	return (str);
}
