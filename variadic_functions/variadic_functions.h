#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct str_type - format specifier and matching printer function
 * @specifier: character that identifies the expected type
 * @fn: function pointer that prints one variadic argument
 */
typedef struct str_type
{
	char specifier;
	void (*fn)(va_list *, char *);
} the_type;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
