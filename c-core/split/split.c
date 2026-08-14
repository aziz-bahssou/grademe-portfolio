#include <stdlib.h>
int _is_charset(char c ,char *charset)
{
	if(*charset == '\0')
		return(0);
	if(c == *charset)
		return(1);
	return(_is_charset(c, charset + 1));
}
int _count_word(char *str , char *charset)
{
	int i;
	int count;
	count = 0;
	i = 0;
	while(str[i])
	{
		if(!_is_charset(str[i], charset)
		&& ((i == 0) || (_is_charset(str[i - 1], charset))))
			count++;
		i++;
	}
	return (count);
}
int _get_len(char *str, char *charset)
{
	int i;
	int len;
	i = 0;
	len = 0;
	while(str[i] && !_is_charset(str[i], charset))
	{
		len++;
		i++;
	}
	return(len);
}
char *int_word(char *str,int len)
{
	char *word;
	int j;
	word = malloc(len + 1);
	if(!word)
		return(0);
	j = 0;
	while(len--)
	{
		word[j] = str[j];
		j++;
	}
	word[j] = '\0';
	return(word);
}
char **split(char *str, char *charset)
{
	char **res;
	int i;
	int j;
	int len;
	res =  malloc((_count_word(str,charset) + 1) * sizeof(char*));
	if(!res)
		return (NULL);
	i = 0;
	j = 0;
	while(str[i])
	{
		if(!_is_charset(str[i], charset))
		{
			len = _get_len(str + i, charset);
			res[j] = int_word(str + i, len);
			j++;
			i += len;
		}
		else
			i++;
	}
	res[j] = NULL;
	return(res);
}
