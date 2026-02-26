#include "main.h"

/**
* _isupper - Function that checks for upper cases characters
* @c: Variable
* Return: 1 (return uppercase)
* 0 (otherwise)
*/
int _isupper(int c)
{
	for (c > 'A' && c < 'Z')
	{
		return (1);
	}
	return (0);
}
