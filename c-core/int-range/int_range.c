#include <stdlib.h>

int *int_range(int from, int to){
	int temp = from;
	int i;
	int *arr;
	int start = from;
	int end = to;

	if(start < end){
		
		i = 0;
		while(from <= end){
			i++;
			from++;
		}
		arr = malloc(i * sizeof(int));
		if(!arr)
			return(NULL);
		i = 0;
		start = temp;
		while(start <= end){
			arr[i] = start;
			start++;
			i++;
		}
		return(arr);
	}
	else{
		i = 0;
		while(start >= end){
			i++;
			start--;
		}
		arr = malloc(i * sizeof(int));

		if(!arr)
			return(NULL);
		
		i = 0;
		start = temp;
		while(start >= end){
			arr[i] = start;
			i++;
			start--;
		}
		return(arr);
	}

}