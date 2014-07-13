#include <stdio.h>
#include "gamelib.h"

void printSeperatorLine(){
	for (int i = 0; i < rows; i++){
    printf("%s", plus);
    printf("%s", dash);
  }
  printf("%s\n", plus);
}


void printPipeSpaceLine(){
	printf("%s", pipe);	
  for (int i = 0; i < rows; i++){
    printf("%s", pipeSpace);
  }
  printf("\n");
}


void printNumberLine(int j){
	printf("%s", pipe);
  int space = ' ';
  for (int i = 0; i < rows; i++){

    // get the number
    int aInt = array24[j][i];

    // convert to a string
    char stri[6];
    sprintf(stri, "%d ", aInt);

    for(int k =0; k < 6; k++){
      if(stri[k] != 0){
				printf("%c", stri[k]);
      }
      else{
				printf("%c", space);        
      }
    }
    printf("%s", pipe);
  }
  printf("\n");
}


void printGrid(){
  printSeperatorLine();  
  for (int i = 0; i < columns; i++){
		printPipeSpaceLine();
    printNumberLine(i);
    printPipeSpaceLine();
    printSeperatorLine();
  }
}
