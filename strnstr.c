// promis je github pas, j'arrive juste pas a include la vraie fonction

#include "libft.h"

char *strnstr(const char *str, const char *substr, size_t n)
{
    char *p = str, *pEnd = str+n;
    size_t substr_len = strlen(substr);

    if(0 == substr_len)
        return str; // the empty string is contained everywhere.

    pEnd -= (substr_len - 1);
    for(;p < pEnd; ++p)
    {
        if(0 == strncmp(p, substr, substr_len))
            return p;
    }
    return NULL;
}
