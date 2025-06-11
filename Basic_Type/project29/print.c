#include<stdio.h>

int main()
{
	char c;
	int num = 0;
	int sign = 0;
	int flag = 0;
	int size = 1;

	printf("Enter a number : ");
	while((c = getchar()) != '\n'){
		if(c == '-' && !flag){
			sign++;
			flag++;
		}
		if(c >= '0' && c <= '9'){
			num = num * 10 + (c - '0');
			flag++;
			size *= 10;
		}
	}

	if(sign)
		num *= -1;
	
	size /= 10;
	
	if(num == 0){
		putchar('0');
		return 0;
	}

	while(num){
		if(num < 0){
			putchar('-');
			num *= -1;
		}
		flag = num / size;
		num %= size;
		size /= 10;
		putchar(flag + '0');
	}
	
	return 0;	
}
