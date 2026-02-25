#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: starting number
 */

void print_to_98(int n)
{
	int d;

	if (n <= 98)
	{
		for (d = n; d <= 98; d++)
		{
			if (d == 98)
				printf("%d\n", d);
			else
				printf("%d, ", d);
		}
	}
	else
	{
		for (d = n; d >= 98; d--)
		{
			if (d == 98)
				printf("%d\n", d);
			else
				printf("%d, ", d);
		}
	}
}
