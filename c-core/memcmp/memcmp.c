#include <stddef.h>

int	memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *S1 = (unsigned char *)s1;
	unsigned char *S2 = (unsigned char *)s2;
	size_t i;

	i = 0;
	while(i < n)
	{
		if(S1[i] != S2[i])
			return(S1[i] - S2[i]);
		i++;
	}
	return (0);
}
