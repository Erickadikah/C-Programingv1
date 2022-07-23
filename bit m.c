#include <stdio.h>

int main()
{
    /* 9 = 0000 1001 */
    unsigned int x = 9;

    /* 24 = 0001 1000 */
    unsigned int y = 24;

    unsigned int r;

    r = x >> 2;
    printf("x << 2: %d\n", r)

}