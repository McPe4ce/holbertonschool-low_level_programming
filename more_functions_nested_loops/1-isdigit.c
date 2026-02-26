#include "main.h"

/**
* _isdigit - function that checks if the variable is a number
* @c: variable
* Return: 1 (its a number); 0 (otherwise)
*/

int _isdigit(int c);
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
}
