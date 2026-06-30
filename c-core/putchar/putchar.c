#include <unistd.h>

int putchar(int c)
{
    unsigned char cc;

    cc = (unsigned char)c;
    write(1, &cc, 1);

    return (c);
}



