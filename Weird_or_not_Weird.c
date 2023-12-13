#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x%2!=0 && 2<x<20)
    printf("weird");
    else
    printf("not weird");
}