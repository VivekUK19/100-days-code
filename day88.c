#include <stdio.h>
/*Q138: Print all enum names and integer values using a loop.
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2 */
enum names{RED,YELLOW,GREEN};

int main(){
    for (int i = RED; i <= GREEN; i++)
    {switch(i) {
            case RED:    printf("RED = %d\n", i); break;
            case YELLOW:    printf("YELLOW = %d\n", i); break;
            case GREEN:   printf("GREEN = %d\n", i); break;
        }
    }

    return 0;
}