#include <stdio.h>
int main()
{
    int Day;
    printf("Enter Any number Between (1-7):");
    scanf("%d", &Day);

    switch (Day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thusday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Invalid Input");
    }

    return 0;
}
