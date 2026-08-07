#include <limits.h>

// Writes a / b into *out and returns 0 when the division is legal.
// Returns -1 and leaves *out untouched when it is not.
int	safe_div(int a, int b, int *out)
{
	if (b == 0)
		return (-1);
		
	if (a == INT_MIN && b == -1)
		return (-1);
	*out = a / b;
	return (0);
}
