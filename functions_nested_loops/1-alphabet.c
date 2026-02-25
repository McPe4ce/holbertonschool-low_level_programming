#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	int aTOz;

	for (aTOz = 'a'; aTOz <= 'z'; aTOz++)
	{
		_putchar(aTOz);
	}
	_putchar('\n');

	return (0);
}
