#include <stdio.h>

/**
 * main - Function that prints all the arguments of a line
 * @argc: Number of arguments on the command line
 * @argv: Array that contains the strings of characters that are arguments
 * Return: 0 (Success)
 */

int main(int argc, char **argv)
{
	int index = 0;

	while (index < argc)
	{
	printf("%s\n", argv[index]);
	index++;
	}

	return (0);
}
