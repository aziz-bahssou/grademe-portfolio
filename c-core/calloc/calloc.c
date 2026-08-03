#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>

void	*calloc(size_t nmemb, size_t size)
{
	unsigned char *str;
	size_t len;
	size_t i;

	if (nmemb != 0 && size != 0 && nmemb > SIZE_MAX / size)
    	return (NULL);
	len = nmemb * size;

	str =  malloc(len );
	if(!str)
		return(NULL);

	i = 0;
	while( i < len)
		str[i++] = 0;

	return (str);
}
