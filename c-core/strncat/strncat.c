#include <stddef.h>

char	*strncat(char *dst, const char *src, size_t n){
	if(n <= 0)
		return(dst);
	size_t i = 0;
	while(dst[i])
		i++;
	while(n--){
		dst[i++] = *src;
		src++;
	}
	dst[i] = '\0';
	return (dst);
}
