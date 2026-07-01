#include <unistd.h>


void print_digits(void){

    char i = '0';
    
    while(i <= '9'){
        write(1,&i,1);
        i++;
    }
}
