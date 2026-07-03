#include <unistd.h>

int	main(int argc, char **argv){

	if(argc != 2){
		write(1, "wrong number of arguments\n",26);
		return(0);
	}

	int i;
	i = 0;

	while(argv[1][i]){
		i++;
	}
	int j = (i - 1);
	
	while(j >= 0){
		write(1,&argv[1][j],1);
		j--;
	}
	argv[1][i] = '\0';
	write(1, "\n",1);
	return (0);
}
