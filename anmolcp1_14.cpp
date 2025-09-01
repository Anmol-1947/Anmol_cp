#include <stdio.h>

int main()
{
float c,f;
printf("Enter temperature in celsius ");
scanf("%f" , &c);
f=(9/5*c)+32;
printf("Temperature in fahrenheit = %f" , f);
}