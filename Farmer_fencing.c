#include <stdio.h>
void area(int a, int b)
{
    int c = a * b;
    printf("area of the rectangle is: %d \n", c);
}
void perimeter(int a, int b)
{
    int z = 2 * (a + b);
    printf("perimeter of the rectangle is: %d \n", z);
}
int main()
{
    int a, b;
    printf("enter width :");
    scanf("%d", &a);
    printf("enter length :");
    scanf("%d", &b);
    area(a, b);
    perimeter(a, b);
    return 0;
}