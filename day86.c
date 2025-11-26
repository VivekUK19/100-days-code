#include <stdio.h>
#include <string.h>
/*Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30  */
enum oper{ADD, SUBTRACT , MULTIPLY};
int main(){
    char input[10];
    int a,b;
    printf("enter the operation choice :   and num1 & num2\n");
    scanf("%s %d %d",input,&a,&b);
    enum oper menu;
    if (strcmp(input ,"ADD")==0) menu=ADD;
    else if(strcmp(input ,"SUBTRACT")==0) menu=SUBTRACT;
    else if(strcmp(input ,"MULTIPLY")==0) menu=MULTIPLY;
    else printf("invalid input \n");
    switch (menu)
    {
    case ADD :  printf("%d\n",a+b);
        break;
    
    case SUBTRACT :  printf(" %d\n",a-b);
        break;

    case MULTIPLY :  printf("%d\n",a*b);
        break;
    }
    return 0;
}