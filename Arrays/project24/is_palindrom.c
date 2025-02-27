bool is_palindrom(int arr[], int size)
{
	int i = 0;
	int j = size - 1 ;
	for(; i < j; i++, j--)
		if(arr[i] != arr[j])
			return false;
	return true;
}
