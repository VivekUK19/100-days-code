#include <stdio.h>
/*Q130: Store multiple student records (name, roll number, marks) into a file using fprintf().
Then read them using fscanf() and display each record.
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92  */
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main(){
    struct Student s;
    char filename[100];
    printf("enter the filename \n");
    scanf("%s", filename);

    FILE *fp;
    fp = fopen(filename,"w");
    if (fp == NULL )
    {
        printf("file not found \n");
    }
    int n;
    printf("enter number of students : \n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter name: ");
        scanf("%s", s.name);
        printf("Enter roll number: ");
        scanf("%d", &s.roll);
        printf("Enter marks: ");
        scanf("%f", &s.marks);

        fprintf(fp, "%s %d %f\n", s.name, s.roll, s.marks);
    }
    fclose(fp);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\n--- Student Records ---\n");
    while (fscanf(fp, "%s %d %f", s.name, &s.roll, &s.marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %.0f\n", s.name, s.roll, s.marks);
    }

    fclose(fp);
    return 0;
}