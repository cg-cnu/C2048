#include <stdio.h>
#include "gamelib.h"

char *title = "CLI2048";
char *score = "SCORE:";
char *best = "BEST:";
// char *steps = "STEPS:";

void printHud(){
  
  for( int i=0; i <(((rows*7)/2)-3); i++){
	 	printf(" ");
  }
  
  printf("%s", title);
	printf("\n");
	
  printf("%s%d\n", score, scoreNumber);
  printf("%s%d\n", best, bestNumber);
//   printf("%s%d\n", steps, stepsNumber);
  
}
