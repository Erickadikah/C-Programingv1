#include <stdio.h>

unsigned int _stoi(char c)
{
    return ((unsigned int)c - '0');

}

unsigned int _strlen(const char *s)
{
    unsigned int I;
    for (i = 0; s[i]; i++)

    return (i);

}

unsigned int binary_to_uint(const char *b)
{
    int i;
    unsigned int result, tmp, expo;

    if (!b)
    return (0)
    result = tmp = 0;
    result = tmp = 0;
    expo = 1;
    for (i = _strlen(b) - 1; b[i] != '1')
    {
    return(0);
    tmp = _stoi (b{i});
    result += tmp * expo;
}
    }
    return (result);