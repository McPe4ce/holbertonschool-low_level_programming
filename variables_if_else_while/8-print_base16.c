#include <stdio.h>
/**
* main - Script that prints the numbers from 0 to 9 in base 16
* Return: 0 (Success)
*/

int main(void)
{

	int annoyingV2;

	for (annoyingV2 = '0'; annoyingV2 <= '9'; annoyingV2++)
	putchar(annoyingV2);

	for (annoyingV2 = 'a'; annoyingV2 <= 'f'; annoyingV2++)
	putchar(annoyingV2);

	putchar('\n');
	return (0);
}
