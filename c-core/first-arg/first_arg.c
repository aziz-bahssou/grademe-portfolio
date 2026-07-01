#include <unistd.h>

int	main(int argc, char **argv){
	
	if(argc == 1){
		write(1, "wrong number of arguments\n",26);
		return(0);
	}
	int i;
	char c;
	
	i = 0;

	while(argv[1][i]){
		c = argv[1][i];
		if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
			write(1,&c,1);
		}
		i++;
	}
	write(1, "\n",1);
	return (0);
}
