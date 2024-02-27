#include<stdio.h>
int main()
{
    int n,even=0,odd=0;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);  
    }
    for(i=0;i<n;i++)
    if(i%2==0)
    {
        even=even+arr[i];
    }
    else
    {
        odd=odd+arr[i];
    }
    int diff=even-odd;
    printf("%d",diff);
}