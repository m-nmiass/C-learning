#include <stdio.h>
#include <stdbool.h>

int size ;
char products_name[1000] = {'0'};
int products_price[1000] = {0};
int products_quantity[1000] = {0};

void product_input();
void product_display();
void all_display();
void stock_update();
void expensive_cheap();
void total_value();
char read_char();
int main ()
{
	product_input();
}

char read_char()
{
	char c ;
	while ((c = getchar()) == ' ' || c == '\n');
	getchar();
	return c ;
}

void product_input()
{
	char user_choice ;

	printf ("Enter the number of productsi (up to 1000) : ");
	scanf ("%d", &size);
	getchar();
	
	printf ("Enter products informations 1 by 1 : \n\n");
	for (int i = 0; i < size; i++)
	{
		printf ("Enter the product name (1 char) : ");
		products_name[i] = read_char();

		printf ("Enter the product price : ");
		scanf (" %d", &products_price[i]);

		printf ("Enter the products quantity : ");
		scanf (" %d", &products_quantity[i]);
	}

	all_display();
	while (1)
	{
		printf ("0- teminate the program\n1- show all products\n2- search for a product and display it\n3- change a product\n4- show the most expensive and the cheapest product\n5- Display the total inventory \n");
		printf ("\n enter your command : ");

		user_choice = read_char();

		if (user_choice == '2')
			product_display();
		else if (user_choice == '3')
			stock_update();
		else if (user_choice == '1')
			all_display();
		else if (user_choice == '4')
			expensive_cheap();
		else if (user_choice == '5')
			total_value();
		else if (user_choice == '0')
			return ;
		else
			printf ("Invalid input try again .");
	}

}

void all_display()
{
	printf ("N°		|Pruducts Name		|Products Price		|Products Quantity\n");
	printf ("---------------------------------------------------------------------------------\n");

	for (int i = 0; i < size; i++)
	printf ("%d		%c			  %d			  %d\n", i+1,  products_name[i], products_price[i], products_quantity[i]);
}

void product_display()
{
	int num ;
	printf ("Enter the product num : ");
	scanf ("%d", &num);
	num-- ;

	printf ("N°		|Products Name		|Products Price		|Products Quantity\n");
	printf ("---------------------------------------------------------------------------------\n");
	printf ("%d		%c			%d			%d\n", num, products_name[num], products_price[num], products_quantity[num]);
}

void stock_update()
{
	int num ;
	int i ;
	printf ("Enter the product number : ");
	scanf ("%d", &num);

	printf ("N°		|Products Name		|Products Price		|Products Quantity\n");
	printf ("%d		 %c			 %d			 %d\n", num, products_name[num - 1], products_price[num - 1], products_quantity[num - 1]);

	printf ("1- product name, 2- product price, 3- product quanity, 4- skip\n");

	do
	{
		printf ("Enter the command : ");
		scanf ("%d", &i);
		if (i < 1 || i > 4)
		       printf ("Invalid input try again.");
	}while(i < 1 || i > 4);
	
	if (i == 1)
	{
		printf ("Enter the new product name : ");
		products_name[num - 1] = read_char();
	}
	else if (i == 2)
	{
		printf ("Enter the new product price : ");
		scanf ("%d", &products_price[num - 1]);
	}
	else if (i == 3)
	{
		printf ("Enter the new products Quantity : ");
		scanf ("%d", &products_quantity[num - 1]);
	}
}

void expensive_cheap ()
{
	int min_num = products_price[0] ;
	for (int i = 0; i < size; i++)
		if (min_num > products_price[i])
			min_num = products_price[i];

	int max_num = products_price[0] ;
	for (int i = 0; i < size; i++)
		if (max_num < products_price[i])
			max_num = products_price[i];

	printf ("N°		|Products Name		|Products Price		|Products Quantity\n");
	printf ("---------------------------------------------------------------------------------\n");
	printf ("				cheapest products				  \n");
	for (int i = 0; i < size; i++)
		if (products_price[i] == min_num)
			printf ("%d		%c			%d			%d\n", i + 1, products_name[i], products_price[i], products_quantity[i]);

	printf ("----------------------------------------------------------------------------------\n");
	printf ("				expensive products				  \n");
	for (int i = 0; i < size; i++)
		if (products_price[i] == max_num)
			printf ("%d		%c			%d			%d\n", i + 1, products_name[i], products_price[i], products_quantity[i]);
}

void total_value()
{
	int total = 0 ;
	for (int i = 0; i < size; i++)
		total = total + (products_price[i]*products_quantity[i]) ;

	printf ("The total of products is %d\n", total);
}
