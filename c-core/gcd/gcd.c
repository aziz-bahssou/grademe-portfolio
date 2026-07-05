#include <stdio.h>

int aatoi(char* str){
	int i = 0;
	int sum = 0;
	while(str[i] >= '0' && str[i] <= '9'){
		sum = sum * 10 + (str[i] - '0');
		i++;
	}
	return(sum);
}
int greater_one(unsigned int a, unsigned int b){
	unsigned int temp;
	while(a != 0){
		temp = a;
		a = b % a;
		b = temp;
	}
	return(b);
}

int	main(int argc, char **argv){

	if(argc == 1 ){
		printf("wrong number of arguments\n");
		return(0);
	}
	unsigned int arg1 = aatoi(argv[1]);
	unsigned int arg2 = aatoi(argv[2]);

	if(arg1 > arg2){
		printf("%d\n",greater_one(arg1,arg2));
	}
	else{
		printf("%d\n",greater_one(arg2,arg1));
	}
}
