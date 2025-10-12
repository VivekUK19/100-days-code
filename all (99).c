// Q99. Change the date format from dd/04/yyyy to dd-Apr-yyyy.


#include <stdio.h>
#include <string.h>

int main() {
    char input_date[20];
    char output_date[20];
    char day[3], year[5];

    // Example input: "09/04/2025"
    printf("Enter date in dd/04/yyyy format: ");
    scanf("%s", input_date);

    // Extract day and year
    strncpy(day, input_date, 2);
    day[2] = '\0';
    strncpy(year, input_date + 6, 4);
    year[4] = '\0';

    // Construct output in dd-Apr-yyyy format
    sprintf(output_date, "%s-Apr-%s", day, year);

    printf("Formatted date: %s\n", output_date);
    return 0;
}
