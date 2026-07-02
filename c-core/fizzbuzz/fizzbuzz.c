#include <unistd.h>

void putNumber(int n){
	
	char nb;
	if(n > 9){
		putNumber(n / 10);
	}

	nb = (n % 10) + '0';
	write(1,&nb,1);
}

int	main(){	
	int i = 1;

	while(i <= 100){
		if((i % 3 == 0) && (i % 5 == 0)){
			write(1, "FizzBuzz",8);
		}
		else if( i % 3 == 0){
			write(1, "Fizz",4);
		}
		else if(i % 5 == 0){
			write(1, "Buzz",4);
		}
		else{
			putNumber(i);
		}
		write(1, "\n",1);
		i++;
	}
	return (0);
}
