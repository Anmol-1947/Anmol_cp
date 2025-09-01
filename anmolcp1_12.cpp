#include <stdio.h>

int main()
{
  float g,kg;
  printf("Enter kilograms ");
  scanf("%f", &kg);
  g=kg*1000;
  printf("Grams = %f" , g);
}