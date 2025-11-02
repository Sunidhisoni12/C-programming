//reverse of a number
#include<stdio.h>
int main()
{
    int n,r,rev;

    printf("enter number=");
    scanf("%d",&n);

    while(n<0)
    {
        r=n%10;
;       rev=rev+r*10;
        n=n/10;
    }
    printf("reversed number=");
    return 0;

}