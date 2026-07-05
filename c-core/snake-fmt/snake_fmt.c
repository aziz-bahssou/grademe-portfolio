#include <unistd.h>

int is_upper(char c){
	if(c >= 'A' && c <= 'Z'){
		return(1);
	}	
	return(0);
}
int	main(int argc, char **argv){
	if(argc != 2){
		write(1, "wrong number of arguments\n",26);
		return(0);
	}
	int i = 0;
	while(argv[1][i]){
		if(is_upper(argv[1][i])){
			write(1, "_",1),
			argv[1][i] += 32;
			write(1,&argv[1][i],1);
		}
		else{
		write(1,&argv[1][i],1);
		}
		i++;
	}
	write(1, "\n",1);
}
