#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - prints a char argument
 * @parguments: variadic list
 * @separator: separator to print first
 */
static void print_char(va_list *parguments, char *separator)
{
	printf("%s%c", separator, va_arg(*parguments, int));
}

/**
 * print_int - prints an int argument
 * @parguments: variadic list
 * @separator: separator to print first
 */
static void print_int(va_list *parguments, char *separator)
{
	printf("%s%d", separator, va_arg(*parguments, int));
}

/**
 * print_float - prints a float argument
 * @parguments: variadic list
 * @separator: separator to print first
 */
static void print_float(va_list *parguments, char *separator)
{
	printf("%s%f", separator, va_arg(*parguments, double));
}

/**
 * print_str - prints a string argument
 * @parguments: variadic list
 * @separator: separator to print first
 */
static void print_str(va_list *parguments, char *separator)
{
	char *str;

str = va_arg(*parguments, char *);

if (str == NULL)
{
str = "(nil)";
}
printf("%s%s", separator, str);
}

/**
 * print_all - prints anything according to format specifiers
 * @format: list of types to print
 */
void print_all(const char * const format, ...)
{
	va_list parguments;
	int index = 0;
	int dedex = 0;
	char *separator = "";

	the_type array[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str},
		{0, NULL}
	};

	va_start(parguments, format);
	while (format && format[index])
	{
		dedex = 0;
		while (array[dedex].specifier && array[dedex].specifier != format[index])
		{
			dedex++;

			if (array[dedex].specifier == format[index])
			{
			array[dedex].fn(&parguments, separator);
			separator = ", ";
			}
		}
		index++;
	}
	printf("\n");
	va_end(parguments);
}
