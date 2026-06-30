#include <unistd.h>


void alpha_descent(){
	int i = 0;
    char alpha = 'z';
    char uper;

	while(i < 26){

        if (i % 4 < 2){
            uper = alpha -32;
            write(1,&uper,1);    
            alpha--;
        }
        else{
            write(1,&alpha,1); 
            alpha--;
        }
        i++;
        
    }

	write(1, "\n",1);
}

int	main(){
	alpha_descent();
	return (0);
}
