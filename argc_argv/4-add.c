#include <stdio.h>
#include <stdlib.h>

/**
 * main - Function that prints the sum of the numbers in the file
 * @argc: Number of arguments on the command line
 * @argv: Array that contains the strings of characters that are arguments
 * Return: 0 (Success)
 */

int main(int argc, char **argv)
{
	int index;
	int dedex;
	int result = 0;

	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}

	for (index = 1; index < argc; index++)
	{
		dedex = 0;

		while (argv[index][dedex])
		{
			if (argv[index][dedex] < '0' || argv[index][dedex] > '9')
			{
				printf("Error\n");
				return (1);
			}
			dedex++;
		}
		result += atoi(argv[index]);
	}
	printf("%d\n", result);
	return (0);
}
