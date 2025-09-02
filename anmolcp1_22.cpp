#include <stdio.h>

int main()
{
    float gross,net,dis;
    printf("Enter gross sale ");
    scanf("%f", &gross);
    dis=0.10*gross;
    net=gross-dis;
    printf("Gross sale = %.2f \n", gross);
    printf("Discount (10%) = %.2f \n", dis);
    printf("Net sale = %.2f", net);
}