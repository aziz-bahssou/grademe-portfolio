#include <stddef.h>

// at_or_default returns a[i] when i is a valid index of a, and fallback when it
// is not. This builds without a single diagnostic and still reads out of bounds.
int	at_or_default(const int *a, size_t n, long i, int fallback)
{
	if (i >= 0 && i < (long)n)
		return (a[i]);
	return (fallback);
}