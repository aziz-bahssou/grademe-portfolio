#include <unistd.h>

int	main(int argc, char **argv){
	if(argc != 2){
		write(1, "wrong number of arguments\n",26);
		return(0);
	}
	int i = 0;
	int j;
	int col = 0;
	int count_Sp = 0;
	while(argv[1][i]){
		char print_it = argv[1][i];

		if(print_it == ' '){
			count_Sp = 8 - (col % 8);
			col+= count_Sp;
			j = 0;
			while(j < count_Sp){
				write(1, " ",1);
				j++;
			}

		}
		else{
			write(1,&print_it,1);
			col++;
		}
		i++;
	}
	write(1, "\n",1);

	return (0);
}
