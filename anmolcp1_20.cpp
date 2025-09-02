#include <stdio.h>

int main()
{
    float b,h,a;
    printf("Enter the base of a triangle ");
    scanf("%f" , &b);
    printf("Enter the height of a triangle ");
    scanf("%f" , &h);
    a=h*b/2;
    printf("The area of a triangle is = %.2f" , a);
}