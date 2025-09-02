#include <stdio.h>

int main()
{
    int s,a,p;
    printf("Enter the side of a square ");
    scanf("%d" , &s);
    a=s*s;
    p=4*s;
    printf("Area of square = %d \n", a);
    printf("Perimeter of square = %d \n", p);
}
