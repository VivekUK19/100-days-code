#include <stdio.h>
#include <string.h>
/*Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!      */
enum roles{ADMIN, USER, GUEST};
int main(){
    char role[6];
    printf("enter the user role :\n");
    scanf("%s",role);

    enum roles msg;
    if      (strcmp(role, "ADMIN") == 0) msg = ADMIN;
    else if (strcmp(role, "USER") == 0) msg = USER;
    else if (strcmp(role, "GUEST") == 0) msg = GUEST;
    else printf("invalid input.\n");

    switch (msg)
    {
    case ADMIN :  printf("Welcome Admin!\n");
        break;
    
    case USER :  printf("Welcome User!\n");
        break;

    case GUEST :  printf("Welcome Guest!\n");
        break;
    }
    
    return 0;
}