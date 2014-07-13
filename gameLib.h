#ifndef _grid_h
#define _grid_h

extern int rows;
extern int columns;
extern int arraySize;
extern int randRow;
extern int randCol;

extern int scoreNumber;
extern int bestNumber;
extern int stepsNumber;
extern int num;
extern int array24[4][4];

// extern char *userInput;
extern char *plus;
extern char *dash;
extern char *pipe;
extern char *pipeSpace;

void printGrid();
void printHud();
void updateArray();
void mergeRow();
void moveRow();
void assignRandom2();

#endif
