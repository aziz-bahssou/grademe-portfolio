#include <unistd.h>

int	main(int argc, char **argv){
	if(argc  == 1 || argc > 2){
		write(1,"wrong number of arguments\n",26);
		return(0);
	}
	int i = 0;
	char token;
	

	while(argv[1][i] && ((argv[1][i] == ' ') ||( argv[1][i] >= 9 && argv[1][i] <= 13))){
			i++;
	}
	

	while( argv[1][i] && !(argv[1][i] == ' ' || (argv[1][i] >= 9 && argv[1][i] <= 13))){
		token = argv[1][i];
		write(1,&token,1);
		i++;
	}
	write(1, "\n",1);

	return (0);
}
