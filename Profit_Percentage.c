#include<stdio.h>
int main()
{
    float c,s;
    scanf("%f%f",&c,&s);
    printf("%.2f",(s-c)/c*100.0);
}