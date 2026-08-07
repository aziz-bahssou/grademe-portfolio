// Walk the range [first, last) and hand back the address of the first match.
// last marks the end: it is a valid answer, never a valid read.
int	*find_int(int *first, int *last, int value)
{
	
	while(*first != *last)
	{
		if(*first == value)
			return(first);
		first++;
	}

	return (last);
}
