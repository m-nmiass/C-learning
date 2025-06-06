#include<stdio.h>

int main()
{
	char coin1 = 'a';
	char coin2 = 'a';
	int coins = 0;
	int dollars;

	printf("Enter the amount of money (dollars.coins): ");
	scanf("%d.%c%c", &dollars, &coin1, &coin2);

	if(coin1 >= '0' && coin1 <= '9')
		coins += (coin1 - '0');
	if(coin2 >= '0' && coin2 <= '9')
		coins = coins*10 + (coin2 - '0');

	printf("Bills(dollars)\tAmount\n");

	if(dollars / 100){
		printf("100$\t\t%d\n", dollars/100);
		dollars %= 100;
	}

	if(dollars / 50){
		printf("50$ \t\t%d\n", dollars/50);
		dollars %= 50;
	}

	if(dollars / 20){
		printf("20$ \t\t%d\n", dollars/20);
		dollars %= 20;
	}

	if(dollars / 10){
		printf("10$ \t\t%d\n", dollars/10);
		dollars %= 10;
	}

	if(dollars / 5){
		printf("5$  \t\t%d\n", dollars/5);
		dollars %= 5;
	}

	if(dollars / 2){
		printf("2$  \t\t%d\n", dollars/2);
		dollars %= 2;
	}

	if(dollars)
		printf("1$  \t\t%d\n", dollars);

	printf("\nCoins\t\tAmmount\n");

	if(coins / 50){
		printf("50¢ \t\t%d\n", coins/50);
		coins %= 50;
	}

	if(coins / 25){
		printf("25¢ \t\t%d\n", coins/25);
		coins %= 25;
	}

	if(coins / 10){
		printf("10¢ \t\t%d\n", coins/10);
		coins %= 10;
	}

	if(coins / 5)
		printf("5¢  \t\t%d\n", coins/5);
	
	if(coins)
		printf("1¢  \t\t%d\n", coins);

	return 0;
}
