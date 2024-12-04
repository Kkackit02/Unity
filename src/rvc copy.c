#include <stdio.h>
#include <windows.h>

#include "rvc.h"
#include <string.h>

#define false 0
#define true 1
#define Stim2_3 1
#define Stim4 2
#define Stim5 3
#define Stim6 4

#define CleanerOff 0
#define CleanerOn 1
#define CleanerUp 2

bool F = false; // Front Sensor Interface
bool L = false; // Left Sensor Interface
bool R = false; // Right Sensor Interface
bool D = false; // Dust Sensor Interface
int turnCount = 0;
const int Threshold = 20;
bool isCleanerActive = false;
bool isPowerUpActive = false; // clean이랑 합쳐야함
int cleanerMode;
bool isFrontMotor = false;

int Det_OL()
{
    if (!F)
    {

        // Stimulus 2: count < 100 && !F && !D
        // Functional requirement 2.1
        return Stim2_3;
    }
    else if (F && !L)
    {
        // Stimulus 4: count < 100 && F && !L
        // Functional requirement 4.1
        return Stim4;
    }
    else if (F && L && !R)
    {
        // Stimulus 5: count < 100 && F && L && !R
        // Functional requirement 5.1
        return Stim5;
    }
    else if (F && L && R)
    {
        // Stimulus 6: count < 100 && F && L && R
        // Functional requirement 6.1

        return Stim6;
    }
    else
    {
        // Default case
    }
    return -1;
}

bool Det_DE()
{
    if (D)
    {
        return true;
    }

    return false;
}
void Terminate()
{
    printf("Terminate!\n");
}
void TurnLeft()
{
    printf("RVC is Turning Left\n");
    Sleep(500);
    turnCount++;
    printf("RVC Turned Left\n");
}
void TurnRight()
{
    printf("RVC is Turning Right\n");
    Sleep(500);
    turnCount++;
    printf("RVC Turned Right\n");
}
void TurnBackward()
{
    printf("RVC is Turning Backward\n");
    Sleep(1000);
    turnCount++;
    printf("RVC Turned Backward\n");
}

int ValidateInput(const char *input)
{
    if (strlen(input) != 4)
    {
        return 0; // 잘못된 입력 길이
    }
    for (int i = 0; i < 4; i++)
    {
        if (input[i] != '0' && input[i] != '1')
        {
            return 0; // 잘못된 문자 포함
        }
    }
    return 1; // 유효한 입력
}

void GetInput()
{
    F = false;
    L = false;
    R = false;
    D = false;
    while (true)
    {
        char input[5];
        printf("\nEnter the FLRD values as a 4-digit binary number (e.g., 1010):");
        //scanf("%4s", input);

        for(int i = 0; i < 4; i++)
        {
            input[i] = getchar();
            if(i == 0 && (input[i] == ' ' || input[i] == '\n'))
            {
                i--;
                continue;
            }
            else if(input[i] != '0' && input[i] != '1')
            {
                break;
            }
        }

        if (strlen(input) == 4 &&
            (input[0] == '0' || input[0] == '1') &&
            (input[1] == '0' || input[1] == '1') &&
            (input[2] == '0' || input[2] == '1') &&
            (input[3] == '0' || input[3] == '1'))
        {
            
            F = (input[0] == '1') ? true : false;
            L = (input[1] == '1') ? true : false;
            R = (input[2] == '1') ? true : false;
            D = (input[3] == '1') ? true : false;
            break; 
        }
        else
        {
            printf("\nError: The input must be a 4-digit binary number consisting of only 0 and 1. Please try again. \nEach position corresponds to FLRD.\n");
            while (getchar() != '\n'); // buffer init
        }
    }

    return;
}





int main(void)
{
    // 1 : 테스트케이스일때, 입력을 받고, 끝낼 수 있어야함(지금은 계속 입력을 받으려고함)
    // 2 : 메인 자체가 겹쳐서, 유니티 프레임워크를 실행하는거를 어디든 넣어야함

    printf("\nEnter the FLRD values as a 4-digit binary number (e.g., 1010) \n");
    int obstacle_Location;
    // 0 : Not Work
    // 1 : Move Forward(Clean)
    // 2 : Turn Left
    // 3 : Turn Right
    // 4 : Turn Backward

    bool dust_Existence;

    while (1)
    {
        obstacle_Location = Det_OL();
        if (turnCount >= Threshold)
        {
            // Stimulus 1: count >= 100,
            // Functional requirement 1.1
            Terminate();
            printf("System Terminate\n");
            break;
        }
        while (obstacle_Location == Stim2_3)
        {

            // move forward
            isFrontMotor = true;
            printf("RVC is Moving Forward\n");
            turnCount = 0;
            dust_Existence = Det_DE();
            if (dust_Existence)
            {
                cleanerMode = CleanerUp;
                printf("Dust Detected , Cleaner Power UP ON\n");

                // Stimulus 3:  count < 100 && !F && D,
                // Functional requirement 1.3
            }
            else // Dust not Existence , dust_exitence == false
            {
                cleanerMode = CleanerOn;
                printf("Cleaner ON\n");
                //  Stimulus 2: count < 100 && !F && !D,,
                //  Functional requirement 1.3
            }
            GetInput();
            printf("\n");
            obstacle_Location = Det_OL();
        }

        printf("Cleaner OFF\n");
        cleanerMode = CleanerOff;
        isFrontMotor = false;
        if (obstacle_Location == 2)
        {
            // turn left
            // Stimulus 4: count < 100 && F && !L
            // Functional requirement 4.1
            TurnLeft();
        }
        else if (obstacle_Location == 3)
        {
            // turn right
            // Stimulus 5: count < 100 && F && L && !R
            // Functional requirement 5.1
            TurnRight();
        }
        else if (obstacle_Location == 4)
        {
            // turn backward
            // Stimulus 6: count < 100 && F && L && R
            // Functional requirement 6.1
            TurnBackward();
        }
        GetInput();


        printf("\n");
        //  wait(200);
    }
}
