#include <stddef.h>

int _get_len(char *str)
{
	if(*str == '\0')
		return(0);
	return(1 + _get_len(str + 1));
}

int _str_cmp(char *s1, char *s2)
{
	int i;
	i = 0;
	while(s1[i] && s1[i] == s2[i])
		i++;
	return(s1[i] - s2[i]);
}
void _swapit(size_t i, size_t j, size_t *out)
{
	size_t swap;
	swap = out[i];
	out[i] = out[j];
	out[j] = swap;
}

void	argsort_len(char **arr, size_t n, size_t *out)
{
	size_t j;
	size_t i;

	if(n == 0)
		return;
	i = 0;
	while(i < n)
	{
		out[i] = i;
		i++;
	}
	i = 0;
	while(i < n)
	{
		j = i + 1;
		while(j < n)
		{
			if(_get_len(arr[out[i]]) > _get_len(arr[out[j]]))
				_swapit(i, j, out);

			else if(_get_len(arr[out[i]]) == _get_len(arr[out[j]]))
			{
				if(_str_cmp(arr[out[i]], arr[out[j]]) > 0)
					_swapit(i, j, out);
				else if(_str_cmp(arr[out[i]], arr[out[j]]) == 0
				&& out[i] > out[j])
					_swapit(i, j, out);
			}
			j++;
		}
		i++;
	}
	
}
