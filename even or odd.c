#include <stdio.h>
int main() {
   int a, b, c;
   // Input three numbers
   printf("Enter three numbers:");
   scanf("%d %d %d", &a, &b, &c);
   // Determine the largest number
   if (a > b && a > c) {
       printf("the greatest number is %d .\n", a);
   } else if (b > a && b > c) {
       printf("%d is the greatest number.\n", b);
   } else {
       printf("%d is the greatest number.\n", c);
   }
   return 0;
}