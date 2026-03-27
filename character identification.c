#include<stdio.h>
int main(){
    char ch;
    printf("enter a character");
    scanf("%c",&ch);
    
    if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z')){
        printf("it is an alphabet.");
    }
    else if (ch>='0'&&ch<='9')
    {
        printf("it is a digit.");
    }
    else{
        printf("it is a special character.");
    }
    return 0;
}