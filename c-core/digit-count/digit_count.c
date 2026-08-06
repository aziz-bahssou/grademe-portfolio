// Count the decimal digits of n, sign excluded, with zero written as one digit.
// Never negate n: INT_MIN has no positive counterpart inside an int.
int	digit_count(int n)
{
	int count;

	if(n == 0)
		return(1);
	count = 0;
	while(n)
	{
		n /= 10;
		count++;
	}
	return (count);
}
