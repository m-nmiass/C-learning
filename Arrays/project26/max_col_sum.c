int max_col_sum(int rows, int cols, int matrix[rows][cols])
{
	int count = 0 ;
	int max = INT_MIN ;
	int max_col_sum = 0 ;

	for(int i = 0; i < cols; i++)
	{
		for(int j = 0; j < rows; j++)
			count += matrix[j][i];
		if(count > max)
		{
			max = count;
			max_col_sum = i;
		}
		j = 0 ;
		count = 0 ;
	}
	return max_col_sum;
}
