#include <stdlib.h>
char *strdup(const char *src){
	
	int i = 0;
	while(src[i++]);

	char* str = malloc((i + 1) * sizeof(char));

	if(!str){
		return(NULL);
	}

	i = 0;
	while(src[i]){
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';

	
	return (str);
}
