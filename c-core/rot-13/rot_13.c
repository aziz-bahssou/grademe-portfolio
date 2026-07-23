#include <unistd.h>
char ft_leethen_n (char c)
{
	c += 13;
	return(c);
}

char ft_bigerthan_n(char c)
{
	c -= 13;
	return(c);
}
int	main(int argc, char **argv)
{
	if(argc != 2)
	{
		write(1, "wrong number of arguments\n",26);
		return(0);
	}
	int	i;
	i = 0;
	char c;
	while(argv[1][i])
	{
		c = argv[1][i];
		if((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
			c = ft_leethen_n(c);

		else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
			c = ft_bigerthan_n(c);

		write(1,&c,1);
	i++;
	}
	write(1, "\n",1);
	return (0);
}
