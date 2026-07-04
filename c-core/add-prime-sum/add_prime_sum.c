#include <unistd.h>
#include <stdlib.h>

int _atoi(char* str){
	int sum = 0;
	int i = 0;

	while(str[i] >= '0' && str[i] <= '9'){
		sum = sum * 10 + (str[i] - '0');
		i++;
	}
	return(sum);
}

void put_nb(int nb){
	char printit;

	if(nb  >= 10){
		put_nb(nb / 10);
	}

	printit = (nb % 10) + '0';

	write(1,&printit,1);
}
int is_prime(int nb){

	int i;
	if(nb < 2){
		return(0);
	}
	i = 2;
	while(i * i<= nb){
		if(nb % i == 0){
			return(0);
		}
		i++;
	}
	return(1);

}

int	main(int argc, char **argv){

	if(argc != 2){
		write(1, "0\n",2);
		exit(0);
	}

	int nb = _atoi(argv[1]);
	int i = 2;
	int sum = 0;

	while(i <= nb){

		if(is_prime(i)){
			sum+= i;
		}
		i++;
	}

	put_nb(sum);
	write(1, "\n",1);
}
