#include <unistd.h>

int	main(int argc, char **argv){
	if(argc != 2){
		write(1, "wrong number of arguments\n",26);
		return(0);
	}
	int i = 0;
	while(argv[1][i]){
		if(argv[1][i] == '_'){
			if(argv[1][i + 1] >= 'a' && argv[1][i + 1] <= 'z'){
				argv[1][i + 1] -= 32;
			}
			i++;
		}
		if(i == 0 && (argv[1][i] >= 'A' && argv[1][i] <= 'Z')){
			argv[1][i] += 32;
		}
		write(1,&argv[1][i],1);
		i++;
	}
	write(1, "\n",1);
}
