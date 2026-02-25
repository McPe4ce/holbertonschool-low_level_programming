#include "main.h"

/**
* print_sign - prototype that prints the sign of a number
* @n: Number variable that stores the variable given
* Return: 1 (Positive)
*/

int print_sign(int n)
{
	if (n > 0)

	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
