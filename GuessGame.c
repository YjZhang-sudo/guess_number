//Game of guess the number.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("******************************\n");
	printf("****  1. play  0. exit    ****\n");
	printf("******************************\n");
}

	
void game()
{
	int guess = 0;
	int ret = 0;
	//srand((unsigned int) time(NULL));
	ret = rand()%100+1;//generates 0-100 pseudorandom number.
	//
	
	//printf("%d\n", ret);
	// 1. generates a pseudorandom number.
	// 2. guess number
	while (1)
	{	
		printf("please guess the number:");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("guess big.\n");
		}
		else if (guess < ret)
		{
			printf("guess small.\n");
		}
		else
		{
			printf("congratulations, you guess right.\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int) time(NULL));
	//timestamp
	do
	{
		menu();
		printf("please input:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("exit game\n");
			break;
		default:
			printf("you have a wrong choice\n");
			break;
		}
	}
	while (input);


	return 0;
} 
