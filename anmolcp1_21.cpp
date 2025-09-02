#include <stdio.h>

int main()
{
    float gross,net,all,dedt;
    printf("Enter gross salary");
    scanf("%f", &gross);
    all=0.10*gross;
    dedt=0.03*gross;
    net=gross+all-dedt;
    printf("Gross salary = %.2f \n", gross);
    printf("Allowance (10%) = %.2f \n", all);
    printf("Deduction (3%) = %.2f \n", dedt);
    printf("Net salary = %.2f", net);
}