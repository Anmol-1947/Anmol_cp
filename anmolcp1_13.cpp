#include <stdio.h>

int main()
{
 long b,kb,mb,gb;
 printf("Enter bytes ");
 scanf("%ld",&b);
 printf("kb = %ld \n" , kb=b/1024);
 printf("mb = %ld \n" , mb=b/(1024*1024));
 printf("gb = %ld \n" , gb=b/(1024*1024*1024));
}