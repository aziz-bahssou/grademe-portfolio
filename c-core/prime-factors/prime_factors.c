#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int n;
	int i;

	if (argc != 2){
		printf("wrong number of arguments\n");
		return (0);
	}

	n = atoi(argv[1]);

	if (n == 1){
		printf("1\n");
		return (0);
	}

	i = 2;
	while (n > 1)
	{
		if (n % i == 0){
			printf("%d", i);
			n /= i;
			if (n > 1)
				printf("*");
		}
		else
			i++;
	}
	printf("\n");
	return (0);
}