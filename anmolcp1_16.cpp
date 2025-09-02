#include <stdio.h>

int main()
{
int i,p,r,n;
printf("Enter principal amount = ");
scanf("%d" , &p);
printf("Enter rate of interest = ");
scanf("%d" , &r);
printf("Enter time period = ");
scanf("%d" , &n);
i=p*r*n/100;
printf("Simple interest = %d" , i);
}