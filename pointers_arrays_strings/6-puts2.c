#include "main.h"

/**
 * puts2 - Function that prints every other character
 * @str: Variable that stores the string
 */

void puts2(char *str)
{
	int index = 0;

	while (str[index] != '\0')				//As long as the value pointed by str isnt NULL
	{
		_putchar(str[index]);				//Print the character

		if (str[index + 1] == '\0')			//If the next value is NULL, stop the loop
		{
			break;
		}
		else
		{
			index += 2;						//Otherwise move 2 blocks
		}
	}
	_putchar('\n');
}
