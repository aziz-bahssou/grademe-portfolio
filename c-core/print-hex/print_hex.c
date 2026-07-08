#include <unistd.h>
void ft_putchar(char c){
	write(1,&c,1);
}
void print_hex(long nbr){
	char *hex = "0123456789abcdef";
	if(nbr >= 16){
		print_hex(nbr / 16);
	}
	ft_putchar(hex[nbr % 16]);
}

int	main(int argc, char **argv){
	if(argc != 2){
		write(1, "wrong number of arguments\n",26);
		return(0);
	}
	int i = 0;
	long res = 0;

	while(argv[1][i]){
		res = res * 10 + (argv[1][i] - '0');
		i++;	
	}

	print_hex(res);
	write(1, "\n",1);
	return (0);
}
