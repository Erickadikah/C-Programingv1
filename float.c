#include <stdio.h>

main()
{
    int int_num1, int_num3; /* declares integer variables */
    float flt_num1, flt_num2, flt_num3; /* declare floating-point variables */

    int_num1 = 32 / 10;  /* both divisors and divident are integers */
    flt_num1 = 32 / 10;
    flt_num2 = 32.0 / 10; /* the divisor is an interger */
    flt_num2 = 32.0 / 10;
    int_num3 = 32 / 10.0; /* the divident is an integer */
    flt_num3 = 32 / 10.0;

    printf("the integer divi. of 32/10 is: %d\n", int_num1);
    printf("the floating-point divis. of 32/10 is: %f\n", flt_num1);
    printf("the integer divis. of 32.0/10 is: %d\n", int_num2);
    printf("the floating-point divis. of 32.0/10 is: %f\n", flt_num2);
    printf("the integer diviS. of 32/10.0 is : %d\n", int_num3);
    printf("the floating-point divis. of 32/10.0 is: %f\n", flt_num3);
    return 0;
    
}