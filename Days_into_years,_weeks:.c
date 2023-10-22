#include<stdio.h>
int main()
{
    int n,weeks,years;
    scanf("%d",&n);
    years=n/365;
    weeks=(n%365)/7;
    printf("%d
%d",years,weeks);
}