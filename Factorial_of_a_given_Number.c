#include<stdio.h>
int main()
{
    int n,i,a=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       a*=i;
       
    }
    printf("%d ",a);
}