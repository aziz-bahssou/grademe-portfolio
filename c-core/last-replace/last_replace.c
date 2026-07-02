#include <unistd.h>

	int get_len(char *argv){
		int i = 0;
		while(argv[i]){
			i++;
		}
		return(i);
	}

int	main(int argc, char **argv){

	if(argc != 4){
		write(1, "wrong number of arguments\n",26);
		return(0);
	}

	int arg1 = get_len(argv[1]);
	int arg2 = get_len(argv[2]);
	int arg3 = get_len(argv[3]);

	if(arg2 > 1 || arg3 > 1){
		write(1, "\n",1);
		return(0);
	}

	int i = (arg1 - 1);

	while(i >= 0){
		if(argv[2][0] == argv[1][i]){
			argv[1][i] = argv[3][0];
			break;
		}
		i--;
	}

	i = 0;
	while(argv[1][i]){
		write(1,&argv[1][i],1);
		i++;
	}
	write(1, "\n",1);
	return (0);
}
