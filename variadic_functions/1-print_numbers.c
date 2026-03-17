#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Function that prints numbers with a separator
 * @separator: Variable that stores the string to separate numbers
 * @n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list parguments;
	unsigned int index;

	if (n == 0)
	{
		printf("\n");
	}

	else
	{
		va_start(parguments, n);

		for (index = 0; index < n; index++)
		{
			printf("%d", va_arg(parguments, int));

			if (separator != NULL && index < n - 1)
			printf("%s", separator);
	}
		va_end(parguments);
		printf("\n");
	}
}
