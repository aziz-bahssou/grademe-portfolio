#include <stddef.h>

char	*strncpy(char *dst, const char *src, size_t n)
{
	if(n <= 0)
		return (dst);

	size_t i = 0;
	while(src[i] && i < n)
	{
		dst[i] = src[i];
		i++;
	}

	if(i < n)
	{
		while(i < n){
			dst[i] = '\0';
			i++;
		}
	}
	return (dst);
}
