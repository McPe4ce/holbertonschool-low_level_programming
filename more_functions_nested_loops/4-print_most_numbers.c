#include "main.h"

/**
* print_most_numbers - Script that prints numbers except some
*/
void print_most_numbers(void)
{
	int nono24;

	for (nono24 = 0; nono24 <= 9; nono24++)
	{
		if (nono24 != 2 && nono24 != 4)
		{
			_putchar(nono24 + '0')
		}
		_putchar('\n');
	}
}
