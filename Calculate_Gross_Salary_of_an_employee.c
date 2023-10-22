#include<stdio.h>
int main()
{
    float gs,bs,h,d,p;
    scanf("%f%f%f",&h,&d,&p);
    bs=(h)*12/100;
    gs=bs+h+d+p;
    printf("%.2f
%.2f
",bs,gs);
}
