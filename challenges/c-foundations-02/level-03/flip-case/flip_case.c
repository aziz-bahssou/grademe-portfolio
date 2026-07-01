#include <unistd.h>

int	main(int argc, char **argv){
	
	if(argc == 1){
		write(1, "wrong number of arguments\n",26);
		return(0);
	}
	char alpha;
	int i = 0;
	while(argv[1][i]){

		alpha = argv[1][i];

		if(alpha >= 'a' && alpha <= 'z'){
			alpha -= 32 ;
			write(1,&alpha,1);
		}
		else if(alpha >= 'A' && alpha <= 'Z'){
			alpha += 32 ;
			write(1,&alpha,1);
		}
		else{
			write(1,&alpha,1);
		}
		i++;
	}
	write(1, "\n",1);
	return (0);
}
