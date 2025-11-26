#include <stdio.h>
#include <string.h>
/*Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go'
based on its value.
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go  */
enum light { RED , YELLOW , GREEN };
int main(){
    char light_[8];
    printf("enter the traffic light :\n");
    scanf("%s",light_);
    enum light signal;
    if (strcmp(light_, "RED")==0)
    {
        signal=RED;
    }
    else if (strcmp(light_, "YELLOW")==0)
    {
        signal=YELLOW;
    }
    else if (strcmp(light_, "GREEN")==0)
    {
        signal=GREEN;
    }
    else
        printf("INVALID INPUT\n");

    switch (signal)
    {
    case RED :  printf("STOP.\n");
        break;
    
    case YELLOW :  printf("SLOW.\n");
        break;

    case GREEN :  printf("GO.\n");
        break;
    }
    return 0;
}