#include "main.h"

/**
 * print_rev - Prints the charaters backwards
 * How this works: You create an index variable that will count until
 * you reach \0. When you do u decrease by one and then
 * start printing backwards until you reach back 0.
 * @s: Variable that stores the string
 */

void print_rev(char *s)
{
	int index = 0;

	while (s[index] != '\0')			//As long as the value in s isnt NULL
	{
		index++;						//Move 1 block 
	}
	index--;							//When it reaches the NULL char, decrease the index cursor by 1

	while (index >= 0)					//As long as index didnt reach 0
	{
		_putchar(s[index]);				//Prints the value that it points
		index--;						//Decreases its value by 1
	}
	_putchar('\n');						//New line
}
