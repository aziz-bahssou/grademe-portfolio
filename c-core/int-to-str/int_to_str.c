#include <stdlib.h>

int	_int_len(long n){
	int	len = 0;
	if (n == 0)
		return (1);
	while (n > 0){
		len++;
		n /= 10;
	}
	return (len);
}
char	*int_to_str(int n){
	long	nb;
	int		len;
	char	sign;
	char	*str;

	sign = '+';
	nb = (long)n;
	if (nb < 0){
		sign = '-';
		nb = -nb;
	}
	len = _int_len(nb);
	if (sign == '-')
		len++;

	str = malloc(len + 1);
	if (!str)
		return (NULL);

	str[len] = '\0';
	if (nb == 0)
		str[--len] = '0';

	while (nb > 0)
	{
		str[--len] = (nb % 10) + '0';
		nb /= 10;
	}

	if (sign == '-')
		str[0] = '-';
		
	return (str);
}