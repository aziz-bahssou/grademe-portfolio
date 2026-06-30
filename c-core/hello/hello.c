#include <unistd.h>

int	main(){
	char str[] ="Hello World!";
	int i = 0;

	while(str[i]){

		write(1,&str[i],1);
		i++;
	}
	write(1, "\n",1);
	return (0);
}
