#include <unistd.h>

int	main(int argc, char **argv){
	if(argc != 3 ){
		write(1, "wrong number of arguments\n",26);
		return(0);
	}
	int len = 0;
	while(argv[1][len])
		len++;
	int i = 0;
	while(argv[2][i]){
		if(len == 0){
			break;
		}
		int j = 0;
		while(argv[1][j]){
			if(argv[2][i] == argv[1][j] && argv[2][i] != argv[2][i+1])
				len--;
			
			j++;
		}
		i++;
	}

	if(len == 0)
		write(1, "yes\n",4);
	else
		write(1, "no\n",3);
	
	return (0);
}
