#include <stddef.h>

void	*memcpy(void *dst, const void *src, size_t n){

	unsigned char *d = dst;
	const unsigned char *s = src;

	size_t i = 0;

	while(i < n){
		d[i] = s[i];
		i++;
	}
	
	return (d);
}
