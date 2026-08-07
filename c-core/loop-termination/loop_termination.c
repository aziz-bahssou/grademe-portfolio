#include <stddef.h>

size_t	count_steps(unsigned int start)
{
	if(start == 0)
		return(0);
	
	return( 1 + count_steps(start / 2));
}
