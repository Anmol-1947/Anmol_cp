#include <stdio.h>

int main()
{
float c,fa;
printf("Enter temperature in fahrenheit ");
scanf("%f" , &fa);
c=(fa-32)*5/9;
printf("Temperature in celsius = %f" , c);
}