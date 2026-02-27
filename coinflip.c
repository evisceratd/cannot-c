#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
srand(time(0));
 int coin_state = (rand()%2)+1;        /* coin_state = 1 is heads, 2 is tails*/
 printf("Heads or Tails? (H \\ T) \n>");
 char user_input;
 scanf(" %c",&user_input);
 switch(user_input){
	   case 'H':
     case 'h':
 if(coin_state == 1) printf("Flipped coin: H\nYou win!\n");
 else printf("Flipped coin: T \nYou lose!\n");
	   break;

	    case 'T':
	    case 't':
 if(coin_state == 2) printf("Flipped coin: T\nYou win!\n");
 else printf("Flipped coin: H\nYou lose!\n");
	    break;

	default:
 printf("Enter either H or T...\n");
	break;
  }
return 0;
}
