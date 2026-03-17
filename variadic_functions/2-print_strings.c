#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Function that prints strings
 * @separator: Variable that stores the string to separate numbers
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list parguments;
	unsigned int index;
	char *str;

	va_start(parguments, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(parguments, char*);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != 0 && index < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(parguments);
	printf("\n");
}
