#include<stdio.h>
#include<stdlib.h>
#include<time.h>
enum status{ Continue, Won, Lost };
int rollDice(void);
int main(void){
	int sum;
	int myPoint;

	enum status gameStatus;

	srand(time(NULL));  //讓rand ()函式能夠在每次執行時產生不同順序的亂數。

	sum = rollDice();


	switch (sum)
	{
	case 7 :
	case 11:
		gameStatus = Won;
		break;

	case 2 :
	case 3 :
	case 12:
		gameStatus = Lost;
		break;

	default:
		gameStatus = Continue;
		myPoint = sum;
		printf("Point is %d\n", myPoint);
		break;
	}


	while (gameStatus == Continue)
	{
		sum = rollDice();
		if (sum == myPoint)gameStatus = Won;
		else if (sum == 7)gameStatus = Lost;
	}
	if (gameStatus == Won)printf("Player win \n");
	else printf("Player loses \n");

	system("pause");
	return 0;
}
int rollDice(void){
	int d1,d2,worksum;
	d1 = 1 + (rand() % 6);
	d2 = 1 + (rand() % 6);
	worksum = d1 + d2;
	printf("Player roller %d+%d=%d\n", d1, d2, worksum);
	return worksum;
}