#include<stdio.h>
int main ()
{
int a[5],b[5],c[5];
int i,n;
printf("enter the number oi elements:");
scanf("%d",&n);

printf("enter the elemts of array1:\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf(":enter the elemts of second array:\n");
for(i=0;i<5;i++)
{
    scanf("%d",&b[i]);
}
for(i=0;i<n;i++)
{
c[i]=a[i]+b[i];
scanf("the sum is %d",c[i]);
}
printf ("the sum is :%d",c[i]);

return 0;
}