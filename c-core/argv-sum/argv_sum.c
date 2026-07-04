#include <unistd.h>

int _aatoi(char *str){
	int i = 0;
	int sum = 0;
	int sing = 1;

	if(str[i] == '-'){
		sing = -1;
		i++;
	}

	while(str[i] >= '0' && str[i] <= '9'){
		sum = sum * 10 + (str[i] - '0');
		i++;
	}
	return(sum * sing);
}

void _putnbr(int nb){

	if (nb < 0){
		write(1, "-",1);
		nb = -nb;
	}
	if(nb >= 10)
		_putnbr(nb / 10);
	
	char printIt = (nb % 10) + '0';
	write(1,&printIt,1);

}

int	main(int argc, char **argv){
	if(argc == 1){
		write(1, "0\n",2);
		return(0);
	}
	int sum = 0;
	int i = 1;
	
	while(i < argc){

		sum += _aatoi(argv[i]);	
		i++;
	}
	_putnbr(sum);
	write(1, "\n",1);

	return (0);
}


