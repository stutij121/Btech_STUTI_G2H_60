#include<stdio.h>
int main ()
{
    int a[50],n,i;
    int even=0,odd=0;

    printf("enter the array elements:");
    scanf("%d",&n);
    printf("enter the array elements:\n");

    for(i=0;i<n;i++)
{
    if(a[i]%2==0)
    {
        even++;
    }
    else{
        odd++;
    }
}

printf("even number =%d",even);
printf("odd numbers =%d",odd);
return 0;
}