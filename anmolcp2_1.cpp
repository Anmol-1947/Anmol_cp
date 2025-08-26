#include<stdio.h>
int main()
{
    //largest number
    int a,b;
    printf("Enter the first number a ");
    scanf("%d",&a);

    printf("Enter the second number b ");
    scanf("%d",&b);

    if(a>b)
        printf("The larger number is = %d \n" ,a);
        else if(b>a)
            printf("the larger number is = %d \n",b);
        else
            printf("Both numbers are equal \n");

    //smallest number
        if(a<b)
        printf("the smaller number is = %d" ,a);
        else if(b<a)
            printf("The smaller number is = %d" ,b);
        else
            printf("Both numbers are equal");

}

