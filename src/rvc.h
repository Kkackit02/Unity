#ifndef RVC_H
#define RVC_H


#define false 0
#define true 1
#define Stim2_3 1
#define Stim4 2
#define Stim5 3
#define Stim6 4

#define CleanerOff 0
#define CleanerOn 1
#define CleanerUp 2
#include <stdbool.h>

typedef struct
{
    int outputArray[100];
    int outputArrayCnt;
} outputSet;

extern bool F, L, R, D;
extern int turnCount;
extern const int Threshold;
extern bool isFrontMotor;
extern int cleanerMode;

int Det_OL(void);
bool Det_DE(void);
void TurnLeft(void);
void TurnRight(void);
void TurnBackward(void);
int GetInput(char** input_Array);
outputSet Main_Logic(char* input);

#endif