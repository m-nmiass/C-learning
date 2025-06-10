#include<stdio.h>

int main()
{
	char operator;
	float num;
	float result = 0;

	printf("Enter the expression : ");

	scanf("%f", &result);

	while(1){
		scanf("%c", &operator);

		if(operator == '\n')
			break;

		scanf("%f", &num);
		//printf("num iss %f operator is %c", num, operator);
		switch(operator){
			case '+' : result += num; break;
			case '-' : result -= num; break;
			case '*' : result *= num; break;
			case '/' : result /= num; break;
		}
		//printf("result is %g\n", result);
	}

	printf("Th result is %g", result);
}
