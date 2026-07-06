#include <stddef.h>

void	*memset(void *s, int c, size_t n){
	unsigned char* str;
	str = s;

	c = (char) c;
	size_t i = 0;
	
		while(i < n){
			*(str + i )= c;
			i++;
		}
	return (str);
}
