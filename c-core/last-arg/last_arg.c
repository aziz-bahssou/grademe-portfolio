#include <unistd.h>

int	main(int argc, char **argv){
	
	if(argc == 1 ){
		write(1, "wrong number of arguments\n",26);
		return(0);
	}

	int i = 0;
	int last = (argc - 1);
	while(argv[last][i]){
		
		write(1,&argv[last][i],1);
		i++;
	}

	write(1, "\n",1);

	return (0);
}
