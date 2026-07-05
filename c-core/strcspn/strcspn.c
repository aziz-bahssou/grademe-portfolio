#include <stddef.h>

size_t	strcspn(const char *s, const char *reject){
	
	int i = 0;
	int j;
	
	while(s[i]){
		j = 0;
		while(reject[j]){
			if(s[i] == reject[j]){
				return(i);
			}
			j++;
		}
		i++;
	}
	return ((size_t) i);
}
