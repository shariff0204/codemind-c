#include<stdio.h>
int main ()
{
    int n,n1,s=0,s1=0,i;
    scanf("%d%d",&n,&n1);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        s=s+i;
    }
    for(i=1;i<=n1/2;i++)
    {
        if(n1%i==0)
        s1=s1+i;
    }
    if(n==s1 && n1==s)
    printf("Amicable");
    else
    printf("Not Amicable");
}