#include <stdio.h>

/**
 * main - Function that prints the name of the file and the nb of arguments
 * @argc: Number of arguments on the command line
 * @argv: Array that contains the strings of characters that are arguments
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[0]);
	printf("There are %d arguments\n", argc);

	return (0);
}
