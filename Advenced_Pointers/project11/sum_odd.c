#include<stdio.h>
#include<stdlib.h>

int main()
{
        int count;
        int odd_sum = 0;
        printf("Enter the amont of numbers : ");
        do{
                scanf("%d", &count);
                if(count <= 0)
                        printf("Invalid input try again.");
        }while(count <= 0);

        int *p = malloc(count * sizeof(int));

        printf("Enter number(s) up to %d numbers(s)\n", count);

        for(int i = 0; i < count; i++){
                printf("Enter number %d : ", i+1);
                scanf("%d", p + i);
                if(p[i] % 2 != 0)
                        odd_sum += p[i];
        }

        printf("The sum of all even numbers is : %d", odd_sum);
}

