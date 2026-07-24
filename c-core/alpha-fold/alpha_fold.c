#include <unistd.h>
void ft_alpha_fold(char *c)
{
	*c = 'z' - (*c - 'a');
}

int	main(int argc, char **argv)
{
	if(argc != 2)
	{
		write(1, "wrong number of arguments\n",26);
		return(0);
	}
	int i;
	i = 0;
	while(argv[1][i])
	{
		if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
			ft_alpha_fold(&argv[1][i]);
		write(1, &argv[1][i],1);
		i++;
	}
	write(1, "\n",1);
	return (0);
}
