#include <unistd.h>

void putNumber(int n){
	char nb;

	if(n > 9){
		putNumber(n / 10);
	}
	nb = (n % 10) + '0';

	write(1,&nb,1);
}

int	main(int argc, char **argv){
	(void) argv;

	if(argc == 0){
		write(1, "0/n",2);
	}
	putNumber(argc - 1);
	write(1, "\n",1);
	return (0);
}
