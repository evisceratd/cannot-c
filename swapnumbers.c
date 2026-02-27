/* Won't swap variables in printf() */
#include <stdio.h>
int main()
{
float x,y,s=0;
printf("Enter x: \n>");
scanf(" %f",&x);
printf("Enter y: \n>");
scanf(" %f",&y);
s=y;
y=x;
x=s;
printf("Now x: %5.2f\n",x);
printf("Now y: %5.2f\n",y);
return 0;
}
