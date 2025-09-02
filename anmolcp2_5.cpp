#include <stdio.h>

int main()
{
  float gross,net,dis;
  printf("Enter gross sales ");
  scanf("%f",&gross);
  if(gross>20000)
  {
      dis=0.15*gross;
  }
  else if(gross>10000)
  {
      dis=0.15*gross;
  }
  else
  {
      dis=0.05*gross;
  }
  net=gross-dis;
  printf("Net sales = %.2f",net);
}
