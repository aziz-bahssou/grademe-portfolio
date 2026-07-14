#include <unistd.h>

void _tolowercase(char *str){
	int i = 0;
	while(str[i]){
		if(str[i] >= 'A' && str[i] <= 'Z'){
			str[i]  += 32;
		}
		i++;
	}
}

void print_it(char *str){
	int i = 0;
	while(str[i]){
		char c = str[i];
		write(1,&c,1);
		i++;
	}
	write(1, "\n",1);
}
int	main(int argc, char **argv)
{
	if(argc == 1){
		write(1, "wrong number of arguments\n",26);
		return(0);
	}
	int i = 1;
	while(argv[i]){
		_tolowercase(argv[i]);
		i++;
	}
	i = 1;
	int end;
	int j;
	int word_end;
	while( i < argc)
	{
		j = 0;
		while(argv[i][j]){
			while(argv[i][j] == ' ' || argv[i][j] == '\t')
			j++;

			end = j;
			while(argv[i][end] != ' '
				&& argv[i][end] != '\t'
				&& argv[i][end] != '\0')
				end++;
			word_end = end;
			end--;

			while(end >= j && !(argv[i][end] >= 'a' && argv[i][end] <= 'z'))
			end--;

			if(end >= j){
				argv[i][end] -= 32;
			}
			j = word_end;
		}
	i++;		
	}
	i = 1;
	while(i < argc){
		print_it(argv[i]);
		i++;
	}
	return (0);
}
