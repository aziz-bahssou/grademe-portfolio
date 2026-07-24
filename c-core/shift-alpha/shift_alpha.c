#include <unistd.h>

void ft_upercase(char *c)
{
    if (*c == 'Z')
        *c = 'A';
    else
        *c += 1;
}

void ft_lowercase(char *c)
{
    if (*c == 'z')
        *c = 'a';
    else
        *c += 1;
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        write(1, "wrong number of arguments\n", 26);
        return (0);
    }
    int i = 0;
    while (argv[1][i])
    {
        if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            ft_lowercase(&argv[1][i]);
        else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            ft_upercase(&argv[1][i]);
        
        write(1, &argv[1][i], 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}