#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter first number\n");
    scanf("%d",&x);
    printf("enter second number\n");
    scanf("%d",&y);
    printf("enter third number\n");
    scanf("%d",&z);
    if(x>y && y>z)
    {
        printf("x is greatest");
    }
    else if(y>x && y>z)
    {
        printf("y is greatest");
    }
    else
    {
        printf("z is greatest");
    }
    return 0;
}