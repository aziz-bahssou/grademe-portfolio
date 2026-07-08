#include <unistd.h>

void *to_lower(char *str){
	int i = 0;
	while(str[i]){
		if(str[i] >= 'A' && str[i] <= 'Z'){
			str[i] += 32;
		}
			i++;
	}
	return(str);
}
void print_str(char* str){
	int i = 0;
	while(str[i]){
		write(1,&str[i],1);
		i++;
	}
	write(1, "\n",1);
}

int	main(int argc, char **argv){

	if(argc == 1){
		write(1, "wrong number of arguments\n",26);
		return(0);
	}
	int i;
	int j;
	i = 1;

	while(i < argc){
		char* str = to_lower(argv[i]);
		j = 0;
		while(str[j]){
			if(j == 0 && (str[j] >= 'a' && str[j] <= 'z')){
				str[j] -= 32;
			}
			
			if((str[j] == ' ' || str[j] == '\t') && (str[j + 1] >= 'a' && str[j + 1] <= 'z')){
				str[j + 1] -= 32;
			}
			j++;
		}
		print_str(str);
		i++;
		
	}

	return (0);
}
