#include<stdio.h>
int main(){
    int num1,num2,choice;
    float result;
    printf("simple calculator\n");
    printf("____________\n");
    printf("1.performing addition(+)\n");
    printf("2.performing subtraction(-)\n");
    printf("3.performing multiplication(*)\n");
    printf("4.performing division(/)\n");
    printf("enter your choice(1-4)");
    scanf("%d",&choice);

    printf("enter two numbers");
    scanf("%d %d",&num1,&num2);

    switch(choice){
       case 1:
       result=num1+num2;
       printf("result=%.2f",result);
       break;

case 2:
result=num1-num2;
printf("result=%.2f",result);
break;

case 3:
result=num1*num2;
printf("result=%.2f",result);
break;

case 4:
if(num2!=0){
    result=num1/num2;
printf("result=%.2f",result);
break;
    } else {
        printf("error");
 }
   break;
default:
printf("invalid choice");
}
return 0;
}
