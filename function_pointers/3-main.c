#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * main - Function that calculates
 * @argc: Number of arguments on the line
 * @argv: Array that stores the arguments
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	int result, num1, num2;
	int (*whatsign)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	whatsign = get_op_func(argv[2]);

	if (whatsign == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}
	result = whatsign(num1, num2);

	printf("%d\n", result);
	return (0);
}
