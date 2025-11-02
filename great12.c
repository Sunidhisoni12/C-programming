//sum of all numbers upto a given number
#include<stdio.h>
int main()
{
    int i,num,sum=0;

    printf("enter value of the number");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    printf("sum of all the digits=%d",sum);

    return 0;
}