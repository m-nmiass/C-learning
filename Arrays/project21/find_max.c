int find_max(int arr[], int size)
{
	int max = arr[0];
	int i = 1 ;
	while (i < size) {
		if (max < arr[i])
			max = arr[i];
		i++;
	}

	return (max);
}
