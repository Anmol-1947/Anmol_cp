#include <stdio.h>

int main()
{
    int len,wid,a,p;
    printf("Enter the length of a rectangle ");
    scanf("%d" , &len);
    printf("Enter the width of a rectangle ");
    scanf("%d" , &wid);
    a=len*wid;
    p=2*(len+wid);
    printf("Area of rectangle = %d \n", a);
    printf("Perimeter of rectangle = %d \n", p);
}
