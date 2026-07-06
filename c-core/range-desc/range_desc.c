#include <stdlib.h>
int *range_desc(int min, int max){
	
	int* arr = malloc(((max - min) + 1 ) * sizeof(int));
	if(!arr)
		return(NULL);

	int i;
	if(max >= min){
		i = 0;
		while(max >= min){
			arr[i] = max;
			i++;
			max--;
		}
	}
	else{
		i = 0;
		while(min > max){
			arr[i] = max;
			max--;
			i++;
		}
	}
	return (arr);
}
