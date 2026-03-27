#include<stdio.h>
int main ()
{
    int a[5];
    int n,i,sum=0;
    printf("enter the number of elements of the array");
    scanf("%d",&n);
    printf("enter the elements:\n");
   
for(i=0;i<n;i++)
{
     scanf("%d",&a[i]);
    sum=sum+a[i];
}
printf("the sum of elements is:%d",sum);
return 0;
}