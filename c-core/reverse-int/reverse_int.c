#include <stddef.h>

// Flip the order of the first n elements of a, in place.
// Nothing past that prefix moves, and n == 0 changes nothing.
void swap(int *a, int *b)
{
	int swap;
	swap = *a;
	*a = *b;
	*b = swap;
}

void	reverse_int(int *a, size_t n)
{

	size_t i;
	size_t j;
	i = 0;
	j = n - 1;
	while(i < n && i < j)
	{
		swap(&a[i], &a[j]);
		j--;
		i++;
	}
}
