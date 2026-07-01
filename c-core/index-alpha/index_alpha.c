#include <unistd.h>

int	main(int argc, char **argv){

	if(argc != 2){

		write(1, "wrong number of arguments\n",26);
		return(0);
	}
	int count;
	char alpha = 'a';
	int i;
	i = 0;

	while(argv[1][i]){

		if(argv[1][i] >= 'a' && argv[1][i] <= 'z'){
			int j = 0;
			count = argv[1][i] - alpha;

			while(j < count){
				write(1,&argv[1][i],1);
				j++;
			}
			
		}
		else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z'){
			int j = 0;
			count = argv[1][i] - (alpha - 32);

			while(j < count){
				write(1,&argv[1][i],1);
				j++;
			}
			
		}
		else{
			write(1,&argv[1][i],1);
		}
		
		i++;
	}

	write(1, "\n",1);
	return(0);
    
}

