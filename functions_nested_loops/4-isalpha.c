#include "main.h"

/**
*_isalpha - prototype that returns 1 of the character, c, is a letter
* in lower or upper case.
* @c: variable that stores the code below
* Return: 1 (Success)
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
