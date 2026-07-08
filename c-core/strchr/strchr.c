#include <stdio.h>
char	*strchr(const char *s, int c){

	char ch = (char)c;
	
	while(*s){
		if(ch == *s){
			return((char*)s);
		}
		s++;
	}

	if(*s == ch){
		return((char*)s);
	}
	
	return (NULL);
}
