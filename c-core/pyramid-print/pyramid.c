#include <stdlib.h>
#include <unistd.h>

// argv[1] is the height. Print a centered pyramid of '#', one row per line.
// A wrong argument count prints "wrong number of arguments" and a newline.
void print_it(char c, int size)
{
	int i = 0;
	while(i < size)
	{
		write(1, &c,1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int height;
	int i;
	if(argc != 2)
	{
		write(1, "wrong number of arguments\n",26);
		return(0);
	}
	
	height = atoi(argv[1]);
	if(height <= 0)
		return(0);

	i = 0;
	while(i < height)
	{
		print_it(' ', height - i - 1);
		print_it('#', 2 * i + 1);
		write(1, "\n",1);
		i++;
	}
	
	return (0);
}
