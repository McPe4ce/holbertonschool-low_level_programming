#include <stdio.h>
#include <stdlib.h>

/**
 * main - Function that prints the name of the file and the nb of arguments
 * @argc: Number of arguments on the command line
 * @argv: Array that contains the strings of characters that are arguments
 * Return: 0 (Success)
 */

int main(int argc, char **argv)
{
	int first_nb;
	int second_nb;
	int result;
	
	  if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	first_nb = atoi(argv[1]);
	second_nb = atoi(argv[2]);
	
	(void)argc;
	result = first_nb * second_nb;
	printf("%d\n", result);

	return (0);

}
