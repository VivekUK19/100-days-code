#include <stdio.h>
/*Q131: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.
Sample Test Cases:
Input 1:
No input
Output 1:
SUNDAY = 0
MONDAY = 1
TUESDAY = 2
WEDNESDAY = 3
THURSDAY = 4
FRIDAY = 5
SATURDAY = 6    */
enum week{ Sunday , Monday , Tuesday , Wednesday , Thursday , Friday , Saturday};

int main(){
    for (int i = Sunday; i <= Saturday; i++)
    {switch(i) {
            case Sunday:    printf("SUNDAY = %d\n", i); break;
            case Monday:    printf("MONDAY = %d\n", i); break;
            case Tuesday:   printf("TUESDAY = %d\n", i); break;
            case Wednesday: printf("WEDNESDAY = %d\n", i); break;
            case Thursday:  printf("THURSDAY = %d\n", i); break;
            case Friday:    printf("FRIDAY = %d\n", i); break;
            case Saturday:  printf("SATURDAY = %d\n", i); break;
        }
    }
    


    return 0;
}