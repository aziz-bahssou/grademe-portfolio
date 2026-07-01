#include <unistd.h>

int	main(int argc, char **argv){

	if(argc == 1){
		write(1, "wrong number of arguments\n",26);
		return(0);
	}
	
	char main_c = 'a';

	int i = 0;
	char alpha;
	int count;
	int j;

	while(argv[1][i]){
		alpha = argv[1][i];

		if(alpha >= 'a' && alpha <= 'z'){
			j = 0;
			count = alpha - main_c;

			while(j < count){
				write(1,&alpha,1);
				j++;
			}
		}
		else if (alpha >= 'A' && alpha <= 'Z'){
			main_c -= 32;
			j = 0;

			count = alpha - main_c;

			while(j < count){
				write(1,&alpha,1);
				j++;
			}
			main_c += 32;
		}
		else{
			write(1,&alpha,1);
		} 

		i++;
	}
	write(1, "\n",1);
	return (0);
}
