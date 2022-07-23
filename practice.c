#include <stdio.h>

int main()
{
    unsigned int x = 72;
    unsigned int y = 9;
    unsigned int r;

    r = x | y;
    printf("x | y: %d\n", r);
    
    r = x & y;
    printf("x & y: %d\n", r);

    r = y >> 1;
    printf("y >> 2: %d\n", r);

    r = x << 2;
    printf("x << 2: %d\n", r);
     r = ~y;
     printf("~y: %d\n", r);
      r = x ^ y;
      printf("x ^ y: %d\n", r);

}