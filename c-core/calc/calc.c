#include <stdlib.h>
#include <stdio.h>

typedef enum {
    ADD      = '+',
    SUBTRACT = '-',
    MULTIPLY = '*',
    DIVIDE   = '/',
	MODULO   = '%'
} Operation;

int	main(int argc, char **argv)
{
	if(argc != 4){
		printf("%s\n","wrong number of arguments");
		return (0);
	}
	int	num1 = atoi(argv[1]);
	char op = argv[2][0];
	int num2 = atoi(argv[3]);

	switch(op)
	{
		case ADD:
			printf("%d\n", num1 + num2);
		break;

		case SUBTRACT:
			printf("%d\n", num1 - num2);
		break;

		case MULTIPLY:
			printf("%d\n", num1 * num2);
		break;

		case DIVIDE:
			if(num2 != 0)
				printf("%d\n", num1 / num2);
		break;

		case MODULO:
			if(num2 != 0)
				printf("%d\n", num1 % num2);
		break;

		default:
			return(0);
	}
	return (0);
}
