#include <stdio.h>

int main()
{
    float m1,m2,m3,total,avg;
    printf("Enter the marks of first subject ");
    scanf("%f" , &m1);
    printf("Enter the marks of second subject ");
    scanf("%f" , &m2);
    printf("Enter the marks of third subject ");
    scanf("%f" , &m3);
    total=m1+m2+m3;
    avg=total/3;
    printf("The total of three subjects = %.2f \n", total);
    printf("The average of three subjects = %.2f \n", avg);
}
