#include "main.h"

/**
* more_numbers - Prints numbers using putchar even above 10
*/
void more_numbers(void)
{
	int time;
	int timex10;

	for (time = 0; time < 10; time++)
	{
		for (timex10 = 0; timex10 <= 14; timex10++)
		{
			if (timex10 > 9)
			{
				_putchar((timex10 / 10) + '0');
			}
			_putchar((timex10 % 10) + '0');
		}
		_putchar('\n');
	}
}
