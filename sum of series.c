#include<stdio.h>
int main ()
{
    int i,n;
    float sum=0;
    printf("enter the number of elements:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+1.0/i ;
        
    }
    printf("the sum of the series is=%f",sum);
    return 0;
}