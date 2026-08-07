
int	cmp_mixed(int a, unsigned int b)
{
	if((unsigned) a < b || a < 0)
		return(-1);
	if((unsigned) a > b) 
		return(1);
	return(0);
}
