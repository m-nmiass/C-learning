int max_row_sum(int rows, int cols, int matrix[rows][cols])
{
	int max_row ;
	int max = INT_MIN;
	int count = 0 ;
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < cols; j++)
			count += matrix[i][j];
		if(max < count)
		{
			max = count ;
			max_row = i ;
		}
		count = 0 ;
	}
	return max_row;
}
