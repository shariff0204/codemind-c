#include<stdio.h>
int main()
{
    int a,b,i,count=0,m=2,n=3;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;++i)
    {
        if(i%m==0 && i%n==0)
        count++;
    }
    printf("%d ",count);
}