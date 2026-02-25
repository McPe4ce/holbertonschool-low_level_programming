#include "main.h"
/**
* print_last_digit - Prints the last digit of a number
* @l: Integer that represents the last digit
* Return: last_digit (Success)
*/

int print_last_digit(int l)
{
	int last_digit;

	last_digit = l % 10;

	if (last_digit < 0)
		last_digit = -last_digit;

	_putchar('0' + last_digit);

	return (last_digit);
}
