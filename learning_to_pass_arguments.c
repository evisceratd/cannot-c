#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int Random(int range);

int main(){
printf("Want me to guess a number for you?\n Give me a range from 1  bucko!\n>");
int range;
scanf(" %d", &range);
Reset: 
Random(range);
while(1){
  printf("Wanna go again?(Y\\any other character)\n>");
  char userinput;
 scanf(" %c",&userinput);
  if( userinput == 'y' || userinput == 'Y') goto Reset;
  else break;
 }
return 0;
}

int Random( int range){
  srand(time(0));
 int GenNum  = (rand()%range)+1;
  printf(" So the number generated is: %d\n",GenNum);
}
