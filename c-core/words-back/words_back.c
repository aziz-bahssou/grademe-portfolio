#include <unistd.h>
#include <stdlib.h>
int get_len(char *str){
	int i;
	i = 0;
	while(str[i])
		i++;
	return(i);
}
int get_word(char *str)
{
	int i;
	i = 0;
	while(str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
			return(0);
		i++;
	}
	return(1);
}
int is_sep(char c){
	if(c == ' ' || c == '\t')
		return(1);
	return(0);
}

void print_it(char *str ,int i, int end){ 
	while(i <= end)
		write(1,&str[i++],1);
}

int	main(int argc, char **argv)
{
	if(argc != 2)
	{
		write(1,"wrong number of arguments\n",26);
		return(0);
	}
	int i;
	if(get_word(argv[1]))
	{
		i = 0;
		while(argv[1][i])
		{
			write(1, &argv[1][i],1);
			i++;
		}
		write(1, "\n",1);
	}
	else{
		int end = get_len(argv[1]) - 1;
		while(end >= 0)
		{
			while(end >= 0 && is_sep(argv[1][end]))
				end--;
			i = end;
			while(i >= 0 && !is_sep(argv[1][i]))
				i--;
			print_it(argv[1],i + 1, end);
			if(i >= 0)
				write(1, " ",1);
			end = i - 1;
		}
		write(1, "\n",1);
	}
	return (0);
}
