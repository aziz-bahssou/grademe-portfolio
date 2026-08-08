#include <stddef.h>
#include <stdint.h>
int islee(size_t n, size_t size)
{
	return (n > SIZE_MAX / size);
}

int	checked_size(size_t n, size_t size, size_t *out)
{
	if(!islee(n, size))
	{
		*out = n * size;
		return(1);
	}
	return(0);
}
