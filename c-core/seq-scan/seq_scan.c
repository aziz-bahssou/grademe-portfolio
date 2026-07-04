#include <unistd.h>

char to_lower(char c){
	
	if(c >= 'A' && c <= 'Z'){
		c += 32;
	}		
	return(c);
}

int	main(int argc, char **argv){

	if(argc != 3){
		write(1, "wrong number of arguments\n",26);
		return(0);
	}
	int len = 0;

	while(argv[1][len])
		len++;
	int j = 0;
	int i = 0;

	while(argv[1][i] && argv[2][j]){
		if(to_lower (argv[1][i]) == to_lower (argv[2][j])){
			i++;
		}
		j++;
	}
	if(i == len){
		i = 0;
		while(argv[1][i]){
			write(1,&argv[1][i],1);
			i++;
		}
	}

	write(1, "\n",1);
	return (0);
}
