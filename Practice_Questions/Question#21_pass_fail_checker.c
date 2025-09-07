#include <stdio.h>
#define Total_marks = 100
int main()
{
    int marks;
    printf("Enter Your Marks:");
    scanf("%d", &marks);

    // Check marks not Greater than Total_Marks
    if (marks > Total_marks)
    {
        printf("Invalid input");
        return 0;
    }
    // Checking pass or NOT
    if (marks >= 40)
        printf("PASS");
    else
        printf("FAIL");

    return 0;
}
