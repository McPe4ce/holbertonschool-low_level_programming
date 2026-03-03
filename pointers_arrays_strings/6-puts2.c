#include "main.h"

/**
 * puts2 - Function that prints every other character
 * @str: Variable that stores the string
 */

void puts2(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		_putchar(str[index]);

		if (str[index + 1] == '\0')
		{
			break;
		}
		else
		{
			index += 2;
		}
	}
	_putchar('\n');
}
