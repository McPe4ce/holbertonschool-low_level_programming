#include <stdio.h>

/**
* main - Prints the alphabet and stops at z
*Return: 0 (Success)
*/

int main(void)
{
char c = 'a';

while (c <= 'z')
{
	putchar(c);
	c++;
}
	putchar('\n');

	return (0);
}
