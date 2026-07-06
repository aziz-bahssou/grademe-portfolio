#include <unistd.h>

int	main(int argc, char **argv){
	if(argc != 2){
		write(1, "wrong number of arguments\n",26);
		return(0);
	}
	int i = 0;
	while(argv[1][i] == ' '|| argv[1][i] == '\t')
		i++;	
	while(argv[1][i]){

		while(argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t'){
			write(1,&argv[1][i],1);
			i++;
		}
		while(argv[1][i] == ' '|| argv[1][i] == '\t'){
			i++;
		}
		if(argv[1][i] != '\0'){
			write(1, "   ",3);
		}

	}
	write(1, "\n",1);
	return (0);
}