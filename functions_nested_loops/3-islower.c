#include "main.h"

/**
* _islower - returns 1 if the character is in lowercase
* @c: in the function explains that it can be used in other lines
* of codes. Without writting the whole code i can just call
* int _islower somewhere else and it will write the code below auto
* with c as a character that can be defined in other functions.
* Return: 1 (Success); 0 (Failure)
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}
