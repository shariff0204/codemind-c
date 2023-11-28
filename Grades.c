#include<stdio.h>
int main ()
{
	int a,b,c,d,e,T,R;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	T=a+b+c+d+e;
	R=T*100/500;
	if(R>=90)
	printf("Grade A");
	else if (R>=80)
	printf("Grade B");
	else if (R>=70)
	printf("Grade C");
	else if (R>=60)
	printf("Grade D");
	else if (R>=40)
	printf("Grade E");
	else if (R<40)
	printf("Grade F");
}