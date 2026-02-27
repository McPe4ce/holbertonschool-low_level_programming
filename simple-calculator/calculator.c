#include <stdio.h>

int main(void)
{
	char presskey;
	int menuwu;
	int feed_me_more;
	int obiONE;
	int obiTWO;

	printf("Welcome to my calculator that calculates with calculations :)\n");
	printf("Press SPACE key and ENTER to start the menu: ");
	scanf("%c", &presskey);

	if (presskey == ' ')

	{
		printf("SIMPLE CALCULATOR\n");
		putchar('\n');
		printf("1) Sum\n");
		printf("2) Subtract\n");
		printf("3) Multiplication\n");
		printf("4) Division\n");
		printf("0) I QUIT\n");
		printf("Select your path padawan: ");
		scanf("%d", &menuwu);

		while (menuwu != 0 && menuwu != 1 && menuwu != 2 && menuwu !=3 && menuwu != 4)
		{
			printf("How did you miss... just aim between 0 and 4 next time\n");
			return (0);
		}
		if (menuwu == 0)
		{
			printf("I HAD THE HIGH GROUND ANAKIN, FAREWELL!\n");
			return(0);
		}
		else if (menuwu == 1)
			{
			printf("Enter your first number: ");
			scanf("%d", &obiONE);

			printf("Enter your second number: ");
			scanf("%d", &obiTWO);

			feed_me_more = obiONE + obiTWO;
			printf("Result: %d\n", feed_me_more);
			}
		else if (menuwu == 2)
			{
			printf("Enter your first number: ");
			scanf("%d", &obiONE);

			printf("Enter your second number: ");
			scanf("%d", &obiTWO);

			feed_me_more = obiONE - obiTWO;
			printf("Result: %d\n", feed_me_more);
			}
		else if (menuwu == 3)
			{
			printf("Enter your first number: ");
			scanf("%d", &obiONE);

			printf("Enter your second number: ");
			scanf("%d", &obiTWO);

			feed_me_more = obiONE * obiTWO;
			printf("Result: %d\n", feed_me_more);
			}
	}
	else
	return(0);
}

