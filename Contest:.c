#include<stdio.h>
int main()
{
    int x,y,z,a,b;
    scanf("%d%d%d",&x,&y,&z);
    a=y*1;
    b=z*2;
    if(a+b>=x)
    printf("Qualify");
    else
    printf("Not Qualify");
}