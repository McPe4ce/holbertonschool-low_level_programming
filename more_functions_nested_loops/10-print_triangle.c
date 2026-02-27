#include "main.h"

/**
* print_triangle - Function that prints a triangle
* @size: Variable that defines the size of the triangle
*/
void print_triangle(int size)
{
	int horizon;
	int space;
	int hashtag;

	if (size > 0)
	{
		for (horizon = 1; horizon <= size; horizon++)
		{
			for (space = 0; space < (size - horizon); space++)
			{
				_putchar(' ');
			}
			for (hashtag = 0; hashtag < horizon; hashtag++)
			{
			_putchar('#');
			}
		_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
