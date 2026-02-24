#include <stdio.h>


/**
* main - prints the alphabet in lower case except q and e
*Return: 0 (Success)
*/
int main(void)
{
	char lowerCase;

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
		if (lowerCase != 'q' && lowerCase != 'e')

			putchar(lowerCase);

	}
	putchar('\n')
	return (0)
}
