#include "main.h"

/**
 * _puts - Prints a string using pointers
 * @str: variable that stores the string
 */
void _puts(char *str)
{
	while (*str != '\0')			//As long as the value pointed in the string isnt NULL
	{
		_putchar(*str);				//Prints the value
		str++;						//Moves 1 block
	}
	_putchar('\n');					//Returns the string
}
