#include "main.h"

/**
* print_alphabet_x10 - prints the alphabet 10 times using a new prototype
*/
void print_alphabet_x10(void)
{
	int tenTIMES;
	int alphaB;

	for (tenTIMES = 0; tenTIMES < 10; tenTIMES++)
	{
		for (alphaB = 'a'; alphaB <= 'z'; alphaB++)
		{
			_putchar(alphaB);
		}
	_putchar('\n');
	}
}
