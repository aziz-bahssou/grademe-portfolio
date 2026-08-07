// digit_sum(n) is the last digit of n plus digit_sum(n / 10).
// The sign is dropped, and n itself is never negated: -INT_MIN does not fit.
int	digit_sum(int n)
{
	long sum;
	long nb;
	nb = (long)n;
	if(nb < 0)
		nb = -nb;
	if(n == 0)
		return(0);
	sum = 0;
	while(nb > 0)
	{
		sum += nb % 10;
		nb /= 10;
	}
	return(sum);
}
