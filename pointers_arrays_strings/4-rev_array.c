#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Variable that stores the string
 * @n: Variable that stores the byte where it stops reversing
 */
void reverse_array(int *a, int n)
{
	int first_index = 0;				//Will start at the beginning of the string
	int last_index = n - 1;				//Will run in the string until it reaches the final byte - 1
	int temp;

	while (first_index < last_index)	//As long as the first index is inferior to the last index
	{
		temp = a[first_index];			//Temp stores the value pointed by the first index before
		a[first_index] = a[last_index];	//Assigning the value of the first index to the one at the end
		a[last_index] = temp;			//And the last index will take the value of the first index before it changed

		first_index++;					//Each time this happens, first index will more 1 block
		last_index--;					//Last index will decrease by 1
	}
}
