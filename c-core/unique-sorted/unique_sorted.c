#include <stddef.h>

size_t	unique_sorted(int *a, size_t n)
{
	if (n <= 0)
		return (0);

	size_t i, count;
	i = 1;
	count = 1;
	while(i < n)
	{
		if(a[i] != a[i - 1])
			a[count++] = a[i];
		i++;
	}
		
	return (count);
}
