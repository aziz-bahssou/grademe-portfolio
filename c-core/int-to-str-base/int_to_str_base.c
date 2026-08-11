#include <stdlib.h>
int _base_leen( unsigned int value ,int base)
{
	if(value == 0)
		return(0);
	return (1 + _base_leen(value / base, base));
}

int valid_base(int base)
{
	if(base < 2 || base > 16)
		return (0);
	return (1);
}

char get_deget(int deget)
{
	char base[] = "0123456789abcdef";
	return(base[deget]);
}

char *int_to_str_base(int value, int base)
{
	char *str;
	long nb;
	int sing;
	int len;

	sing = 1;
	len = 0;

	if(value == 0)
		len = 1;

	if( base == 10 && value < 0)
	{
		nb = -(long) value; 
		sing = 0;
	}
	else
		nb = (unsigned int)value;
	
	if(!valid_base(base))
		return (NULL);
	
	len += _base_leen(nb, base);

	if(!sing)
		len++;

	str = malloc(len + 1);
	if(!str)
		return (NULL);

	str[len] = '\0';

	while(nb > 0)
	{
		str[--len] = get_deget((nb % base));
		nb /= base;
	}
	if(value == 0)
		str[0] = '0';

	if(!sing)
		str[0] = '-';

	return(str);
}
