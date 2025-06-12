#include<stdio.h>

int main()
{
	int len;

	printf("Enter the length : ");
	scanf("%d", &len);

	int digits[10] = {0};
	int nums[len];

	for(int i = 0; i < len; i++)
		scanf("%1d", &nums[i]);

	for(int i = 0; i < len; i++)
		digits[nums[i]]++;

	for(int i = 0; i < 10; i++){
		printf("%d: ", i);
		for(int j = 0; j < digits[i]; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}
