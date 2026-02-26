#include "main.h"

int _isupper(int c)
{
	for (c < 'A' && c > 'Z')
	{
		return(1);
	}
	return(0);
}
