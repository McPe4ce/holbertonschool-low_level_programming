#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Prints a chessboard in 8x8
 * @a: Variable that points towards a board
 */
void print_chessboard(char (*a)[8])
{
	int index;
	int dedex;

	for (index = 0; index < 8; index++)
	{
		for (dedex = 0; index < 8; dedex++)

		_putchar(a[index][dedex]);
	}
	_putchar('\n');
}
