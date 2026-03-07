#include "main.h"

/**
 * _atoi - Converts a string to integers (means it will display
 * only the integers)
 * @s: Variable that stored the string
 * Return: toal * sign (Number that will print)
 */
int _atoi(char *s)
{
	int index = 0;        											// Index to loop through the string
	int sign = 1;        											// Stores the sign of the number (+ or -)
	unsigned int total = 0;        									// Stores the converted number
	int found_you = 0;        										// Flag to check if a digit was found

	while (s[index] != '\0')        								// As long as the index didnt reach the NULL char
	{
		if (s[index] >= '0' && s[index] <= '9')        				// Check if current character is a digit
		{
			found_you = 1;        									// Mark that a digit was found
			total = (total * 10) + (s[index] - '0');       			// Add digit to total
		}
		else if (s[index] == '+')        							// If character is '+', keep sign positive
		{
			sign *= 1;        										// No change to sign
		}
		else if (s[index] == '-')        							// If character is '-', flip the sign
		{
			sign *= -1;        										// Change sign to negative
		}
		else if (found_you == 1)        							// If a digit was found and current character is not a digit, stop
		{
			break;        											// Exit the loop
		}
		index++;        											// Move to the next character
	}
	return (total * sign);        									// Return the final number with its sign
}
