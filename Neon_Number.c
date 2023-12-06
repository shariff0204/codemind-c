#include<stdio.h>
int main()
{
    int n,sqr,digit,sum=0;
    scanf("%d",&n);
    sqr=n*n;
    while(sqr!=0)
    {
        digit=sqr%10;
        sum+=digit;
        sqr=sqr/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}