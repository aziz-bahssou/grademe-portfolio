// Return the absolute value of n as a long.
// Widen to long before negating, never after.
long	abs_safe(int n)
{
	long nb;
	nb = (long)n;
	if(nb < 0)
		nb = -nb;
	return (nb);
}
