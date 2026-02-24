#include <unistd.h>

/**
 * main - prints _putchar, followed by a new line
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar";
	int i_die;

	for (i_die = 0; str[i_die] != '\0'; i_die++)
	{
		_putchar(str[i_die]);
	}
	
	_putchar('\n');

	return (0);
}
