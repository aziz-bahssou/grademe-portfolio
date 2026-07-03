#include <unistd.h>
void show_bits(unsigned char byte){

    unsigned char ch;
    int i = 7;

    while(i >= 0){
        ch = ((byte >> i) & 1) + '0';
        write(1,&ch,1);
        i--;
    }



}
