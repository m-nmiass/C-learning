#include<stdio.h>
#include<stdlib.h>


int main()
{
	int count;
	int sum = 0;
	int even_sum = 0;
	int odd_sum = 0;
	int choice;
	int new_count;

	printf("Enter the array size : ");
	do{
		scanf("%d", &count);
		if(count <= 0)
			printf("Invalid number try again : ");
	}while(count <= 0);


	int *p = malloc(count * sizeof(int));

	printf("Enter the array elements up to %d element(s) : ", count);

	for(int i = 0; i < count; i++)
		scanf("%d", &p[i]);

	for(int i = 0; i < count; i++){
		sum += p[i];
		if(p[i] % 2 == 0)
			even_sum += p[i];
		else
			odd_sum += p[i];
	}

	printf("The sum is %d\nThe even sum is %d\nThe odd sum is %d\n", sum, even_sum, odd_sum);

	printf("1 : To enter more elements\n2 : To return\n");
	scanf("%d", &choice);

	if(choice == 1){

		printf("Enter the number of added elements : ");
		do{
			scanf("%d", &new_count);
			if(new_count <= 0)
				printf("Invalid number try again : ");
		}while(new_count <= 0);

		p = realloc(p, (count + new_count)*sizeof(int));

		printf("Enter the added elements : ");
		for(int i = count; i < count + new_count; i++)
			scanf("%d", &p[i]);

		for(int i = count; i < count + new_count; i++){
			sum += p[i];
			if(p[i] % 2 == 0)
				even_sum += p[i];
			else
				odd_sum += p[i];
		}

		printf("The sum is %d\nThe even sum is %d\nThe odd sum is %d\n", sum, even_sum, odd_sum);
	}

	free(p);
	return 0;
}
