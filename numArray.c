#include	<stdio.h>
#include	<stdlib.h>
#include 	"gamelib.h"

// defne the array by rows x columns here...??
int array24[4][4] = {{0}};
int gameOver;

int getRandom24(){
	int random24, randomNum;
	randomNum = rand() % 2 ;

  if (randomNum == 0){
  	random24 = 2;    
  }
  else{
  	random24 = 4;    
  }
  return random24;
}

void randRowCol(){
	randRow =  rand() % rows;
  randCol =  rand() % columns;
}

void checkGameOver(){
	gameOver = 1;        
  for (int i =0; i < rows; i ++){
  	for (int j =0; j < columns; j ++){
      if (array24[i][j] == 0){
        gameOver = 0;
      }
    }
	}
}

void assignRandom2(){
  checkGameOver();
  if(gameOver == 0){
		randRowCol();
    while( array24[randRow][randCol] != 0){
      randRowCol();
    }
    array24[randRow][randCol] = 2;
	}
  else{
    char *bye = "GameOver";
    printf("%s\n", bye);
  }
}

void mergeRow(char *input){

  if (*input == 'l'){
    for (int i=(rows-1); i >= 0  ; i--){
      for(int j=(columns-1); j > 0 ; j--){
        if( array24[i][j] == array24[i][j-1] ){
          array24[i][j] = array24[i][j] + array24[i][j-1];
          // assign to the current score value
          array24[i][j-1] = 0;
          break;
        }
      }
    }
  }

  else if (*input == 'j'){
// 		char *test = "ttes";
//     printf("%s", test);
//     char *userInp;
// 		scanf("%S", &userInp);

    for (int i=0; i < rows  ; i++){
      for(int j=0; j < (columns-2) ; j++){
        if( array24[i][j] == array24[i][j+1] ){
          array24[i][j] = array24[i][j] + array24[i][j+1];
          // assign to the current score value
          array24[i][j+1] = 0;
          break;
        }
      }
    }
  }
}

void moveRow(char *input){

  if (*input == 'j'){
    for(int x = 0; x < rows; x++ ){
			int slimArray[4]= {0};
      for(int y=0; y < columns; y++ ){
        if (array24[x][y] !=0){
					for(int j=0; j < columns; j++ ){
						if (slimArray[j] == 0){
            slimArray[j] = array24[x][y];
            }
        	}
        }
      }
      for(int a = 0; a < 4; a++ ){
      array24[x][a] = slimArray[a];
      }
    }
  }
}
      
// sum all the numbers along the way if its 0
//  or the same number as the current.            
      
      
      
//         int i = (rows-1)-x;
//         int j = (columns-1)-y;
//         array24[i][j] = array24[i][j] + array24[i][j-1] 
//         if (array24[i][j] == 0){
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
  
//   if (*input == 'l'){
//     for (int i=(rows-1); i >= 0 ; i--){
//       for(int j=(columns-1); j > 0 ; j--){
//         if( array24[i][j] == 0 ){
//           for(int k = j ; k >= 0 ; k--){
//             if (array24[i][k] != 0){
//               array24[i][j] = array24[i][k];
//               array24[i][k] = 0;
//             }
//           }
//         }
//       }
//     }
//   }  
// }


// void moveRow(char *input){
      
//   if (*input == 'l'){
//     for (int i=(rows-1); i >= 0 ; i--){
//       for(int j=(columns-1); j > 0 ; j--){
//         if( array24[i][j] == 0 ){
//           for(int k = j ; k >= 0 ; k--){
//             if (array24[i][k] != 0){
//               array24[i][j] = array24[i][k];
//               array24[i][k] = 0;
//             }
//           }
//         }
//       }
//     }
//   }
//   else if (*input == 'j'){
//     for (int x=0; x < rows ; x++){
//       for(int y=0; y < (columns) ; y++){
//         if( array24[x][y] == 0 ){
//           for(int z = y ; z < columns ; z++){
//             if (array24[x][z] != 0){
//               array24[x][y] = array24[x][z];
//               array24[x][z] = 0;
//             }
//           }
//         }
//       }
//     }
//   }
// }
  

void mergeColumn(int i){
  for(int j=columns; j > 0 ; j--){
    if( array24[j][i] = array24[j][i-1] ){
      array24[j][i] = array24[j][i] + array24[j][i-1];
			break;
    }
  }
}
