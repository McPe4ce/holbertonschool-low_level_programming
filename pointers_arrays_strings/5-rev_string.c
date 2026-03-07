#include "main.h"

/**
 * rev_string - Reverses a string without giving more memory
 * but simply swaps each letters with the other
 * @s: Variable that stores the string
 */
void rev_string(char *s)
{
	int first_index = 0;						//Will start at the beginning of the string
	int last_index = 0;
	int modo;

	while (s[last_index] != '\0')				//As long as the index didnt reach the NULL char
	{
		last_index++;							//The last index will move forward
	}
	last_index--;								//When it reached the NULL char, decrease it just 1 time

	while (first_index < last_index)			//As long as the first index is inferior to the last index
	{
		modo = s[first_index];					//Modo stores the value pointed by the first index before
		s[first_index] = s[last_index];			//Assigning the value of the first index to the one at the end
		s[last_index] = modo;					//And the last index will take the value of the first index before it changed

		first_index++;							//Each time this happens, first index will more 1 block
		last_index--;							//Last index will decrease by 1
	}
}
