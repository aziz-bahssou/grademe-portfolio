#include <unistd.h>
int get_len(char *str){
	int i = 0;
	while(str[i])
		i++;

	return(i);
}

void print_it(char*str){
	int i = 0;
	while(str[i])
		write(1,&str[i++],1);
}

int	main(int argc, char **argv){

	if(argc != 4){
		write(1, "wrong number of arguments\n",26);
		return(0);
	}	
	if(get_len(argv[2]) != 1 || get_len(argv[3]) != 1){
		write(1, "\n", 1);
		return(0);
	}

	int len = get_len(argv[1]);
	
	len--;

	while(len >= 0){
		if(argv[1][len] == argv[2][0]){
			argv[1][len] = argv[3][0];
			break;
		}
		len--;
	}
	print_it(argv[1]);
	write(1, "\n",1);
	return (0);
}
