#include <stdio.h>
#include "gamelib.h"
#include	<stdlib.h>
#include	<time.h>

char *plus = "+";
char *dash = "------";
char *pipe = "|";
char *pipeSpace = "      |";
// char *num = "     5";
int num = 0;

int rows = 4;
int columns = 4;
int arraySize;
int randRow;
int randCol;
  
// int numArray[rows * columns ];

int scoreNumber = 0;
int bestNumber = 0;
int stepsNumber = 0;

char quit = 'q';
char userInput; //= "a";

void display();

void main(){  
  arraySize = rows * columns;
	srand(time(NULL));
  display();
  printf("\033[2J\033[1;1H");
}

//     scanf("%c", &userInput);

void display(){
// 	scanf("%c", userInput);
  while(userInput != quit){
		printf("\033[2J\033[1;1H");
 		assignRandom2();
		printHud();
		printGrid();
		scanf("%S", &userInput);
		if(userInput == 'l' || userInput == 'j'){
//        char *test = "tere";
//        printf("%c\n", userInput);
			moveRow(&userInput);
//       mergeRow(&userInput);
//  			moveRow(&userInput);
      display();
    }
  }
}
