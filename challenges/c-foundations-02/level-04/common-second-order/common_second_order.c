#include <unistd.h>

int already_seen(char *str, int index)
{
    int i = 0;

    while (i < index)
    {
        if (str[i] == str[index])
            return (1);
        i++;
    }
    return (0);
}

int exists(char *str, char c)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

int main(int argc, char **argv)
{
    int i = 0;

    if (argc != 3)
    {
        write(1, "wrong number of arguments\n", 26);
        return (0);
    }

    while (argv[2][i])
    {
        if (!already_seen(argv[2], i) && exists(argv[1], argv[2][i]))
            write(1, &argv[2][i], 1);

        i++;
    }

    write(1, "\n", 1);
    return (0);
}