#include<stdio.h>

int main()
{
	char num;
	int digit0 = 0;
	int digit1 = 0;
	int digit2 = 0;
	int digit3 = 0;
	int digit4 = 0;
	int digit5 = 0;
	int digit6 = 0;
	int digit7 = 0;
	int digit8 = 0;
	int digit9 = 0;

	printf("Enter the number : ");

	for(;;){
		scanf("%c", &num);
		if(num == '\n')
			break;
		if(num >= '0' && num <= '9'){
			switch(num){
				case '0' : digit0++; break;
				case '1' : digit1++; break;
				case '2' : digit2++; break;
				case '3' : digit3++; break;
				case '4' : digit4++; break;
				case '5' : digit5++; break;
				case '6' : digit6++; break;
				case '7' : digit7++; break;
				case '8' : digit8++; break;
				case '9' : digit9++; break;
			}
		}
	}

	printf("Digits\t\tFrequency\n");
	printf("0     \t\t%d\n", digit0);
	printf("1     \t\t%d\n", digit1);
	printf("2     \t\t%d\n", digit2);
	printf("3     \t\t%d\n", digit3);
	printf("4     \t\t%d\n", digit4);
	printf("5     \t\t%d\n", digit5);
	printf("6     \t\t%d\n", digit6);
	printf("7     \t\t%d\n", digit7);
	printf("8     \t\t%d\n", digit8);
	printf("9     \t\t%d\n", digit9);

	return 0;
}
