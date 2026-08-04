#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	width;
	int	height;
	int	i;
	int	j;

	if (argc != 3)
	{
		write(1, "wrong number of arguments\n", 26);
		return (0);
	}
	width = atoi(argv[1]);
	height = atoi(argv[2]);
	if (width <= 0 || height <= 0)
		return (0);
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			if ((i == 0 && j == 0)
				|| (i == 0 && j == width - 1)
				|| (i == height - 1 && j == 0)
				|| (i == height - 1 && j == width - 1))
				write(1, "+", 1);
			else if (i == 0 || i == height - 1)
				write(1, "-", 1);
			else if (j == 0 || j == width - 1)
				write(1, "|", 1);
			else
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}