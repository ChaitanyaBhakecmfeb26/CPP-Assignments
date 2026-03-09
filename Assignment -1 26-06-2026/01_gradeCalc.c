#include <stdio.h>

float marks[5];
float total = 0, percentage;
char grade;

int main()
{
    // Taking input from user
    printf("Enter marks for the 5 subjects:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Subject %d:", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    // Percentage Calc
    percentage = total / 5.0;


    printf("\n --- Result ----\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Subject %d Marks: %.2f\n", i + 1, marks[i]);
    }

    printf("Total Marks : %.2f\n", total);
    printf("Percentage : %.2f\n", percentage);
    printf("Grade: %s\n",
       (percentage >= 75) ? "A" :
       (percentage >= 60) ? "B" :
       (percentage >= 45) ? "C" : "Fail");

    return 0;
}
