#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function that prints the sum of arguments
 * @n: Number total of arguments
 * Return: total (The result)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list parguments;
	int total = 0;
	unsigned int index;

	if (n == 0)
	{
		return (0);
	}

	va_start(parguments, n);

	for (index = 0; index < n; index++)
	{
		total += va_arg(parguments, int);
	}
	va_end(parguments);
	return (total);
}
