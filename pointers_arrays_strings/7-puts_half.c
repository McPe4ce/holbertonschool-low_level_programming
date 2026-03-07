#include "main.h"

/**
 * puts_half - Function that prints the 2nd half of a string only
 * @str: Variable that stores the string
 */
void puts_half(char *str)
{
	int mid_index;
	int final_boss = 0;

	while (str[final_boss] != '\0')				//As long as final boss didnt reach the NULL char
	{
		final_boss++;
	}
	//mid index takes the total value /2 to go at the half and as long as mid index isnt equal to final boss, move 1 block
	for (mid_index = (final_boss + 1) / 2; mid_index < final_boss; mid_index++)
	{
		_putchar(str[mid_index]);
	}
	_putchar('\n');
}
