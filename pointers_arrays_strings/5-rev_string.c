#include "main.h"

/**
 * rev_string - Reverses a string without giving more memory
 * but simply swaps each letters with the other
 * @s: Variable that stores the string
 */
void rev_string(char *s)
{
	int first_index = 0;
	int last_index = 0;
	int modo;

	while (s[last_index] != '\0')
	{
		last_index++;
	}
	last_index--;

	while (first_index < last_index)
	{
		modo = s[first_index];
		s[first_index] = s[last_index];
		s[last_index] = modo;

		first_index++;
		last_index--;
	}
}
