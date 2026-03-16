#include "main.h"
#include <stdlib.h>

/**
 * print_name - function that prints a name
 * @name: Variable that stores the name
 * @f: Pointer function to name that will fetch the name
 * and print it
*/
void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}

}
