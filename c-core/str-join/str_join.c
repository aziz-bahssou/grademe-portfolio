#include <stdlib.h>
#include <stddef.h>

int	ft_count_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_totallen(char **str, size_t n)
{
	size_t	i;
	int		total;

	i = 0;
	total = 0;
	while (i < n)
	{
		total += ft_count_len(str[i]);
		if (i + 1 < n)
			total++;
		i++;
	}
	return (total);
}

char	*str_join(char **parts, size_t n, char sep)
{
	int		total_len;
	int		pos;
	char	*str;
	size_t	i;
	size_t	j;

	total_len = ft_totallen(parts, n) + 1;
	str = malloc(total_len);
	if (!str)
		return (NULL);
	i = 0;
	pos = 0;
	while (i < n)
	{
		j = 0;
		while (parts[i][j])
		{
			str[pos] = parts[i][j];
			j++;
			pos++;
		}
		if (i + 1 < n)
		{
			str[pos] = sep;
			pos++;
		}
		i++;
	}
	str[pos] = '\0';
	return (str);
}