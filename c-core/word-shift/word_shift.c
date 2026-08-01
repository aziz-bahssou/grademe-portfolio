#include <unistd.h>

int is_sep(char c)
{
	if(c == ' ' || c == '\t')
		return(1);
	return(0);
}
int count_word(char *str)
{
	int i;
	int count;
	count = 0;
	i = 0;
	while(*str)
	{
		if(!is_sep(*str))
		{
			if(!i)
			{
				count++;
				i = 1;
			}
		}
		else
			i = 0;
		str++;
	}
	return(count);
}
int	main(int argc, char **argv)
{
	if(argc != 2)
	{
		write(1, "wrong number of arguments\n", 26);
		return(0);
	}
	int i;
	int start;
	int word_count;
	i = 0;
	word_count = count_word(argv[1]);
	if(word_count == 1)
	{
		while(argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while(argv[1][i] && !is_sep(argv[1][i]))
			write(1, &argv[1][i++],1);
		write(1,"\n",1);
		return(0);		
	}
		while(argv[1][i] && is_sep(argv[1][i]))
			i++;
		start = i;
		while(argv[1][i] && !is_sep(argv[1][i]))
			i++;
		while(argv[1][i] && is_sep(argv[1][i]))
			i++;
		while(argv[1][i])
		{
			if(is_sep(argv[1][i]))
			{
				while(argv[1][i] && is_sep(argv[1][i]))
					i++;
				if(argv[1][i]  != '\0')
					write(1, " ",1);
			}
			else
				write(1, &argv[1][i++],1);
		}
		if(argv[1][i] == '\0')
			write(1, " ",1);
			
		while(argv[1][start] && !is_sep(argv[1][start]))
			write(1, &argv[1][start++],1);
	write(1,"\n",1);
	return (0);
}