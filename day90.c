#include <stdio.h>
/*Q140: Define a struct with enum Gender and print person's gender.
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male        */
typedef enum {
    MALE,
    FEMALE,
    OTHER
} Gender;

typedef struct {
    char name[50];
    Gender gender;
} Person;

int main() {
    Person p;
    p.gender = MALE;

    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
    }

    return 0;
}

