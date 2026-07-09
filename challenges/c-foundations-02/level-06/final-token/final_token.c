#include <unistd.h>

int get_len(char *str)
{
    int i = 0;

    while (str[i])
        i++;
    return (i);
}

int main(int argc, char **argv)
{
    int len;
    int start;
    int end;

    if (argc != 2){
        write(1, "wrong number of arguments\n", 26);
        return (0);
    }

    len = get_len(argv[1]) - 1;

    while (len >= 0 && (argv[1][len] == ' ' || argv[1][len] == '\t'))
        len--;

    if (len < 0){
        write(1, "\n", 1);
        return (0);
    }

    end = len;

    while (len >= 0 && argv[1][len] != ' ' && argv[1][len] != '\t')
        len--;

    start = len + 1;

    while (start <= end){
        write(1, &argv[1][start], 1);
        start++;
    }

    write(1, "\n", 1);
    return (0);
}