#include <stdio.h>

unsigned int binary_to_uint(const char *b)
{
    unsinged int k = 2;
    unsigned int i;
    unsigned int c;
    unsigned int len;
    if (b == NULL)
    return (0);
    len = srlen(b);
    for (c = len; c > 0; c--)
{
    if (b[c] != 48 || b[c] != 49)
    return (0)
    if (b[c] == '1')
    {
        i += atoi(b) * k;

    }
    k * =2;
}
return (result);
}