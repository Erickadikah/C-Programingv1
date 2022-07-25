#include <stdio.h>

main()
{
    int ch;

    printf("please enter one character is  H : %c\n", ch);
    ch = getc(stdin);
    printf("the character you just entered is b : %c\n", ch);
    return 0;
}