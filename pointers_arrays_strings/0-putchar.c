#include "main.h"

/**
 * main - prints _putchar, followed by a new line
 *
 * Return: 0 (Success)
 */
int main(void)
{
	/* The string we want to print; stored as a char array with a
	 * terminating '\0' byte so we can loop until the end.
	 */
	char str[] = "_putchar";

	/* Loop index used to iterate over each character in `str`. */
	int i_die;

	/* Walk the string until we hit the null terminator. For each
	 * character, call `_putchar` which writes the single character
	 * to standard output.
	 */
	for (i_die = 0; str[i_die] != '\0'; i_die++)
	{
		_putchar(str[i_die]);
	}

	_putchar('\n');

	return (0);
}
