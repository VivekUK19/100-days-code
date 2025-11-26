#include <stdio.h>
#include <string.h>
/*Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed    */
enum result{SUCCESS,FAILURE,TIMEOUT};
int main(){
    char input[8];
    printf("ENTER THE result :");
    scanf("%s", input);

    enum result acc;

    if      (strcmp(input, "SUCCESS") == 0)  acc = SUCCESS;
    else if (strcmp(input, "FAILURE") == 0) acc = FAILURE;
    else if (strcmp(input, "TIMEOUT") == 0) acc = TIMEOUT;
    else    printf("invalid input");

    switch (acc)
    {
    case SUCCESS :  printf("OPERATION SUCCESSFULL.\n");
        break;
    
    case FAILURE :  printf("OPERATION FAILED.\n");
        break;

    case TIMEOUT :  printf("OPERATION CAN NOT PROCEED.\n");
        break;
    }
    return 0;
}