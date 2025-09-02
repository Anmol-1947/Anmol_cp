#include <stdio.h>

int main()
{
   int gross,all,dedt,net;
   printf("Enter gross salary ");
   scanf("%d",&gross);
   if(gross>10000)
   {
       all=0.10*gross;
       dedt=0.03*gross;
       net=gross+all-dedt;
   }
   else if(gross>5000)
   {
        all=0.07*gross;
       dedt=0.02*gross;
       net=gross+all-dedt;
   }
   else
   {
    all=0;
       dedt=0;
       net=gross+all-dedt;   
   }
   printf("Net salary = %d" , net);
}
