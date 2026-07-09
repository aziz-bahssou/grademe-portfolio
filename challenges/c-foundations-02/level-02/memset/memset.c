#include <stddef.h>

void	*memset(void *s, int c, size_t n){
	
	unsigned char* str = (unsigned char*) s;

	size_t i = 0;
	while(i < n){
		str[i] = (unsigned char) c;
		i++;
	}
	return (str);
}
