#include <unistd.h>

int aatoi(char *str){
	int i = 0;
	int res = 0;
	while(str[i] >= '0' && str[i] <= '9'){
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return(res);
}
void _putNbr(int nbr){
	char print_it;
	if(nbr > 9 )
		_putNbr(nbr / 10);
	
	print_it = (nbr % 10) + '0';
	write(1,&print_it,1);
}

int	main(int argc, char **argv){

	if(argc == 1){
		write(1, "wrong number of arguments\n",26);
		return(0);
	}

	int i = 1;
	int nb = aatoi(argv[1]);
	int tbl = 0;
	while(i < 10){
		tbl = nb * i;
		_putNbr(i);
		write(1, " x ",3);
		_putNbr(nb);
		write(1, " = ",3);
		_putNbr(tbl);
		write(1, "\n",1);
		i++;
	}
}


