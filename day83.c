#include <stdio.h>
#include <string.h>
/*Q133: Create an enum for months and print how many days each month has.
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days       */

enum Month {JAN , FEB, MAR, APR, MAY, JUN,
            JUL, AUG, SEP, OCT, NOV, DEC
};


const char* getDays(enum Month m) {
    switch(m) {
        case JAN: return "31 days";
        case FEB: return "28 or 29 days";
        case MAR: return "31 days";
        case APR: return "30 days";
        case MAY: return "31 days";
        case JUN: return "30 days";
        case JUL: return "31 days";
        case AUG: return "31 days";
        case SEP: return "30 days";
        case OCT: return "31 days";
        case NOV: return "30 days";
        case DEC: return "31 days";
        default:  return "Invalid month";
    }
}


int main(){
    char input[4];
    printf("ENTER THE MONTH :");
    scanf("%s", input);

    enum Month month;

    if      (strcmp(input, "JAN") == 0) month = JAN;
    else if (strcmp(input, "FEB") == 0) month = FEB;
    else if (strcmp(input, "MAR") == 0) month = MAR;
    else if (strcmp(input, "APR") == 0) month = APR;
    else if (strcmp(input, "MAY") == 0) month = MAY;
    else if (strcmp(input, "JUN") == 0) month = JUN;
    else if (strcmp(input, "JUL") == 0) month = JUL;
    else if (strcmp(input, "AUG") == 0) month = AUG;
    else if (strcmp(input, "SEP") == 0) month = SEP;
    else if (strcmp(input, "OCT") == 0) month = OCT;
    else if (strcmp(input, "NOV") == 0) month = NOV;
    else if (strcmp(input, "DEC") == 0) month = DEC;
    else {
        printf("Invalid input\n");
        return 0;
    }

    printf("%s\n", getDays(month));




    return 0;
}