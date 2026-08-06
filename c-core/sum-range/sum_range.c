// The range is half-open: add the integers from first up to last, last excluded.
// first equal to last means an empty range, whose sum is 0.
int	sum_range(const int *first, const int *last)
{
	unsigned long sum = 0;
	while(*first != *last)
	{
		sum += *first;
		first++;
	}
	return(sum);
}
