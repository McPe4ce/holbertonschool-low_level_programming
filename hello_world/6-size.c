#include <stdio.h>

/**
* main - prints the size of various types
*
* Return: 0 (Success)
*/

int main(void)
{
printf("The size of a char: %lu byte(s)\n", sizeof(char));
printf("The size of an int: %lu byte(s)\n", sizeof(int));
printf("The size of a float: %lu byte(s)\n", sizeof(float));
printf("The size of a long int: %lu byte(s)\n", sizeof(long int));
return (0);
}
