#include <stdio.h>
#define Total_marks 100
int main()
{
    /*
       Input marks (out of 100) and print the grade:
    90+ → A
    80–89 → B
    70–79 → C
    60–69 → D
    Below 60 → Fail */

    int std_marks;
    printf("Enter Your marks (out of 100):");
    scanf("%d", &std_marks);

    // logic
    if (std_marks > Total_marks)
    {
        printf("Invalid input");
        return 0;
    }
    if (std_marks >= 90)
    {
        printf("A");
    }
    else if (std_marks >= 80)
    {
        printf("B");
    }
    else if (std_marks >= 70)
    {
        printf("C");
    }
    else if (std_marks >= 60)
    {
        printf("D");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}