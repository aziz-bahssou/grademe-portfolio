#include <stdlib.h>
char *find_any_char(const char *text, const char *needles){
	int i = 0;
	int j;

	while(text[i]){
		j = 0;
		while(needles[j]){
			if(text[i] == needles[j]){
				return((char*)text + i);
			}
			j++;
		}
		i++;
	}

	return (NULL);
}
