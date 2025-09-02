#include <stdio.h>

int main()
{
    float r,a;
    printf("Enter the radius of a circle ");
    scanf("%f" , &r);
    a=22/7*r*r;
    printf("The area of a circle is = %.2f" , a);
}