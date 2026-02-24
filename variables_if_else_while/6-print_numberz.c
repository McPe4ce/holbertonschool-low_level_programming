#include <stdio.h>

/**
* main - Function that prints numbers using putchar only.
* Return: 0 (Success)
*/
int main(void)
{
	for (int annoying = 0; annoying < 10; annoying++)
		putchar('0' + annoying);

	putchar('\n');
	return (0);
}
