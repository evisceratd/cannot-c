#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void swit(char player_input, int ran1);
 int main(){
  //taking input from player.
     char player_input;
     printf("Rock(R), Paper(P) or Scissors(S)?\nPlayer input: ");
     scanf("%c",&player_input);
  //Generating pseudo random numbers (1-3)
  srand(time(0));
 int ran1 = (rand()%3)+1;
  //Different scene evaluation.
  if(player_input != 'P'&& player_input !=  'S'&& player_input != 'R'){
        printf("Type either R for Rock, P for Paper or S for Scissors\n"
      );
      return 0;
    
  } else {
   swit(player_input, ran1); 
  }
    printf("\n(randdom number generated: %d)\n",ran1);
return 0;
}
  //function prototype for the actual switch func
  void swit(char player_input, int ran1){
switch(ran1){
  case 1: 
    printf("Computer input: Rock!\n");
    if(player_input == 'R'){
        printf("Draw!\n");
    } else if(player_input == 'P') {
        printf("You win!\n");
    } else {
        printf("You lose!\n");
    }
    break;
  case 2:
    printf("Computer input: Paper!\n");
    if(player_input == 'P'){
        printf("Draw!\n");
    } else if(player_input == 'S') {
        printf("You win!\n");
    } else {
        printf("You lose!\n");
    }
    break;
  case 3:
    printf("Computer input: Scissors!\n");
    if(player_input == 'S'){
        printf("Draw!\n");
    } else if(player_input == 'R') {
        printf("You win!\n");
    } else {
        printf("You lose!\n");
    }
    break;
    default: 
     printf("Type either R for Rock, P for Paper or S for Scissors\n");
     break;
    }
  }

