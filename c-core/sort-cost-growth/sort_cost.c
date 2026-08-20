#include <stddef.h>

void swap(int *a, int *b)
{
	int swap;
	swap = *a;
	*a = *b;
	*b = swap;
}
unsigned long	sort_cost(int *a, size_t n)
{
	size_t i;
	size_t j;
	size_t min;

	if(n < 2)
		return(0);
	i = 0;
	while(i < n - 1)
	{
		min = i;
		j = i + 1;
		while(j < n)
		{
			if(a[min] > a[j])
				min = j;
			j++;
		}
		if(min != i)
			swap(&a[min], &a[i]);
		i++;
	}
	return (n * (n - 1) / 2);
}
