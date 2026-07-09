#include <stddef.h>

char *strstr(const char *haystack, const char *needle)
{
    int i;
    int j;

    if (needle[0] == '\0')
        return ((char *)haystack);

    i = 0;
    while (haystack[i])
    {
        j = 0;
        while (needle[j] && haystack[i + j] == needle[j])
            j++;

        if (needle[j] == '\0')
            return ((char *)&haystack[i]);

        i++;
    }
    return (NULL);
}