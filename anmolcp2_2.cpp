#include<stdio.h>
int main()
{
    //largest number
    int a,b,c;
    printf("Enter the first number a ");
    scanf("%d",&a);

    printf("Enter the second number b ");
    scanf("%d",&b);

    printf("Enter the third number c ");
    scanf("%d",&c);

    if(a>b && a>c)
        printf("the largest number is = %d \n" ,a);
        else if(b>a && b>c)
            printf("the largest number is = %d \n",b);
        else if(c>a && c>b)
            printf("The largest number is = %d \n"  ,c);
        else
            printf("All numbers are equal \n");

    //smallest number
        if(a<b && a<c)
        printf("the smallest number is = %d" ,a);
        else if(b<a && b<c)
            printf("The smallest number is = %d" ,b);
        else if(c<a && c<b)
            printf("The smallest number is = %d" ,c);
        else
            printf("All numbers are equal");

}
