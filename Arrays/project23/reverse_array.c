void reverse_array(int arr[], int size)
{
	int temp ;

	for(int i = 0, j = size - 1 ; i < j; i++, j--)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}
