
#include <stdio.h>
int main()
{

    // make program that Input three numbers and print the largest.
    int a, b, c;
    printf("Enter value of a:");
    scanf("%d", &a);

    printf("Enter value of b:");
    scanf("%d", &b);

    printf("Enter value of c:");
    scanf("%d", &c);

    // logic
    
    if (a > b && a > c)
    {
        printf("%d is Greater than %d and %d", a, b, c);
    }
    else if (b > a && b > c)
    {
        printf("%d is Greater than %d and %d", b, a, c);
    }
    else
    {
        printf("%d is Greater than %d and %d", c, a, b);
    }

    return 0;
}
