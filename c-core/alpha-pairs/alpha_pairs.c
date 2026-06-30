#include <unistd.h>
void alpha_paris (){
    int i = 0;
    char c = 'a';
    char uper;

	while(i < 26){

        if (i % 2 == 1){
            uper = c -32;
            write(1,&uper,1);
            write(1,&uper,1);  
        }
        else{
            write(1,&c,1);
            write(1,&c,1);
		}      
        c++;
        i++;
	}
	write(1, "\n",1);
}
int	main(){
	alpha_paris();	
	return (0);
}
