#include <stddef.h>

// out[i] holds the sum of a[0] through a[i], and a stays read-only.
// The running total is a long because it can outgrow an int.
void	prefix_sum(const int *a, size_t n, long *out)
{
	if(n <= 0)
		return;
	size_t i;
	long sum;
	sum = 0;
	i = 0;
	while(i < n)
	{		
		sum += (long) a[i];
		out[i] = sum;
		i++;
	}
}