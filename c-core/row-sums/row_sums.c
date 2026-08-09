#include <stddef.h>

// out[i] holds the sum of the four integers on row i, and rows stays read-only.
// The width is fixed at 4 by the type of rows, so no parameter carries it.
void	row_sums(const int (*rows)[4], size_t nrows, int *out)
{
	size_t i;
	size_t j;
	int sum;
	i = 0;
	while(i < nrows)
	{
		j = 0;
		sum = 0;
		while(j < 4)
		{
			sum += rows[i][j];
			j++;
		}
		out[i] = sum;
		i++;
	}
}
