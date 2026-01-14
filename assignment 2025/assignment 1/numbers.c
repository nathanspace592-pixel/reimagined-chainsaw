#include <stdio.h>
int main (){
   int number1 = 0;
   int number2 = 0;
   int sum = 0;
   
   printf("Enter first number: ");
   scanf("%d", &number1);

   printf("Enter second number: ");
   scanf("%d", &number2);

   sum = number1 + number2;

   printf("sum is %d\n", sum);
}