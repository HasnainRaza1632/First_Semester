#include <stdio.h>
int main()
{
    int year_input;
    
    printf("Enter year: ");
    scanf("%d", &year_input);
    
    if (year_input % 4 == 0 )
    {
        printf("%d is a leap year\n", year_input);
    }
    else
    {
        printf("%d is not a leap year\n", year_input);
    }
    return 0;
}