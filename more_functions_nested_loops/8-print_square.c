#include "main.h"

/**
* print_square - prints a square
* @size: variable that stores the size of the square
*/

void print_square(int size)
{
	int side = 0;
	int height;

	if (size > 0)
	{
		while (side < size)
		{
			for (height = 0; height < size; height++)
			{
				_putchar('#');
			}
			_putchar('\n');
			side++;
		}
	}
	else
	_putchar('\n');
}
