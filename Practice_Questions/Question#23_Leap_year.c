#include <stdio.h>
int main()
{

    int year_input;
    printf("Enter year:");
    scanf("%d", &year_input);

    // logic

    if (year_input % 400 == 0)
    {
        printf("%d is leap year\n", year_input);
    }
    else if (year_input % 4 == 0 && year_input % 100 != 0)
    {
        printf("%d is leap year\n", year_input);
    }
    else
    {
        printf("%d is Not a leap year\n", year_input);
    }

    return 0;
}
