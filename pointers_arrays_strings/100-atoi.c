#include "main.h"

/**
 * _atoi - Converts a string to integers (means it will display
 * only the integers)
 * @s: Variable that stored the string
 */
int _atoi(char *s)
{
	int index = 0;
	int sign = 1;
	unsigned int total = 0;
	int found_you = 0;

	while (s[index] != '\0')
	{
		if (s[index] >= '0' && s[index] <= '9')
		{
			found_you = 1;
			total = (total * 10) + (s[index] - '0');
		}
		else if (sign[index] == '+')
		{
			sign *= 1;
		}
		else if (sign[index] == '-')
		{
			sign *= 1
		}
		else if (found_you == 1)
		{
			break;
		}
		index++;
	}
	return (total * sign);
}
