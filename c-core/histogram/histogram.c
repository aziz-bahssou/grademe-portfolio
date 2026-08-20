#include <stdlib.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	int i;
	int j;
	
	if(ac == 1)
	{
		write(1, "wrong number of arguments\n",26);
		return(0);
	}
	i = 1;
	while(i < ac)
	{
		j = 0;
		while( j < (atoi(av[i])))
		{
			write(1, "#",1);
			j++;
		}
		write(1, "\n",1);
		i++;
	}
	return (0);
}