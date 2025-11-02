//prime number
#include<stdio.h>
int main()
{
    int i,num,prime=0;

    printf("enter value of number=");
    scanf("%d",&num);

    for(i=2;i<=num;i++)
    {
        prime=num%i;
    }
    if(prime==0)
    {
        printf("number is prime");
    }
    else
    {
        printf("number is not prime");
    }
    return 0;
}