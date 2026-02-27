#include<stdio.h>
int main()
{
char opr;
double num1, num2, result;
printf("Enter an arithmetc operator (+ - * /):\n>");
scanf("%c", &opr);
printf("Enter first number: \n>");
 scanf("%lf",&num1);
printf("Enter second  number: \n>");
 scanf("%lf",&num2);
switch(opr){
case '+':
 result = num1 + num2;
  break;
case '-':
 result = num1 - num2;
  break;
case '*':
 result = num1 * num2;
  break
case '/':
 result = num1 / num2;
  break;
default: 
 printf("The fuck man? Just type in one of those operators.\n");
  break;
}
printf("The answer is: %.3lf\n",result);
return 0;
}
