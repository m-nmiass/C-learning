#include<stdio.h>

//Reads a string with the max input character without new line and return the size
int read_line(char arr[], int n)
{
	int i = 0;
	while((arr[i] = getchar()) != '\n' && i < n) i++;
	arr[i] = '\0';
	return i;
}
//Skip white spaces and read the rest with the new line takes two argument the array name and the size with the return of the charcter size including new line
int read_line_2(char arr[], int n)
{
	int i = 0;
	while((arr[i] = getchar()) == ' ' || arr[i] == '\t' || arr[i] == '\n');
	i++;
	while((arr[i] = getchar()) != '\n' && i < n) i++;
	arr[++i] = '\0';
	return i ;
}
//Read all character up to n and skip the rest characters return the string size
int read_line_3(char arr[], int n)
{
	int i = 0;
	char ch;
	while((ch = getchar()) != '\n')
		if(i < n)
			arr[i++] = ch;
	arr[i] = '\0';
	return i;
}
