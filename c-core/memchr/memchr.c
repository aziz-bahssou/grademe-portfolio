#include <stddef.h>

void	*memchr(const void *s, int c, size_t n){
	const unsigned char* str;
	str = (const unsigned char*)s;
	
	c = (unsigned char) c;
	size_t i = 0;
	while(i < n){
		if(c == *(str + i)){
			return((void*)(str + i));
		}
		i++;
	}

	return (NULL);
}
