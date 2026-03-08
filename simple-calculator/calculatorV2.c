
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv)
{
	/* Usage: ./calculatorV2 <operation> <num1> <num2> */
	/* operation: 1=sum, 2=subtract, 3=multiply, 4=divide, 0=quit */
	if (argc < 2)
	{
		printf("Welcome to my calculator that calculates with calculations :)\n");
		printf("Usage: %s <operation> <num1> <num2>\n", argv[0]);
		printf("operation: 1=sum, 2=subtract, 3=multiply, 4=divide, 0=quit\n");
		printf("Example: %s 1 5 7\n", argv[0]);
		return 0;
	}

	int menuwu = atoi(argv[1]);

	if (menuwu != 0 && menuwu != 1 && menuwu != 2 && menuwu != 3 && menuwu != 4)
	{
		printf("How did you miss... just aim between 0 and 4 next time\n");
		return 0;
	}

	if (menuwu == 0)
	{
		printf("I HAD THE HIGH GROUND ANAKIN, FAREWELL!\n");
		return 0;
	}

	if (argc < 4)
	{
		printf("You must provide two numbers for the operation.\n");
		printf("Usage: %s <operation> <num1> <num2>\n", argv[0]);
		return 0;
	}

	int obiONE = atoi(argv[2]);
	int obiTWO = atoi(argv[3]);
	int feed_me_more;
	float divided;

	if (menuwu == 1)
	{
		feed_me_more = obiONE + obiTWO;
		printf("Result: %d\n", feed_me_more);
	}
	else if (menuwu == 2)
	{
		feed_me_more = obiONE - obiTWO;
		printf("Result: %d\n", feed_me_more);
	}
	else if (menuwu == 3)
	{
		feed_me_more = obiONE * obiTWO;
		printf("Result: %d\n", feed_me_more);
	}
	else if (menuwu == 4)
	{
		if (obiTWO == 0)
		{
			printf("Divide by 0 in big 2026, really?\n");
			return 0;
		}
		divided = (double)obiONE / obiTWO;
		if (divided == (int)divided)
		{
			printf("Result: %d\n", (int)divided);
		}
		else
		{
			printf("Result: %.2f\n", divided);
		}
	}
	return 0;
}
