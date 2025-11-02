//factorial
#include<stdio.h>
int main()
{
    int i,num,fact=1;

    printf("enter value of number=");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("factorial of the given number=%d",fact);

    return 0;
}