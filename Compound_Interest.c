#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,ci,d;
    scanf("%f%f%f",&p,&r,&t);
    ci=p*pow((1+r/100),t);
    d=ci-p;
    printf("%.2f",d);
}