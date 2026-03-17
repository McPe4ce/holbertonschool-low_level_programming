#include "function_pointers.h"

/**
  * print_name - Prints a name
  * @name: The name that will be printed
  * @f: Pointer to the function
  *
  * Return: Nothing
  */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
