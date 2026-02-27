#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void gen();
 int main(){
 srand(time(0));
 printf("Do you want roll a dice? (y or n)\n>");
 char init_prompt;
 scanf(" %c",&init_prompt);
 switch(init_prompt){
     case 'y':
     while(1){
     gen();
     printf("Wanna continue? (y or n)\n>");
     char sec_prompt;
     scanf(" %c",&sec_prompt);
     if(sec_prompt=='y'){ 
     continue;
     }
     else if(sec_prompt=='n') break;
     else printf("Invalid prompt!\n"); 
     }
     break;
     case 'n':
     {
         printf("OK then...\n");
         return 0;
     }
     default:
     printf("Enter either y or n. Try again!\n");
     break;
 }
return 0;
}
void gen(){
 int dice_face_num = (rand()%6)+1;
 printf("Number on dice face: %d\n\n",dice_face_num);
 }