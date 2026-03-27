#include<stdio.h>
int main ()
{
    int a[50],n,i,item,flag=0;
    printf("enter the number of elements");
    scanf("%d",& n);

    printf("enter the array elements:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&item);

    }
    printf("enter the element to search");
    scanf("%d",&item);

    for(i=0;i<n;i++)
    {
        if(a[i]==item)
        {
            flag=1;
            printf("element found at position :%d",i+1);
            break;
        }
    }
    if (flag==0)
    {
        printf("element not found");
    }
    return 0;
}
