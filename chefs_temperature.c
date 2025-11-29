#include <stdio.h>
int main()
{
    float a;
    printf("enter temperature in celsius : ");
    scanf("%f", &a);

    float b = (a * 9 / 5) + 32;
    printf(" Temperature in fehrenheit is : %.2f ", b);
    return 0;
}