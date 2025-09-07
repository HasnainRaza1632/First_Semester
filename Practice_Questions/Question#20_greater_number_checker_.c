#include <stdio.h>
int main()
{

    // Making program that Input two numbers and print the greater number
    int a, b;

    printf("Enter value of a:");
    scanf("%d", &a);

    printf("Enter the value of b:");
    scanf("%d", &b);

    // logic
    if (a > b)
    {
        printf("%d is Greater than %d", a, b);
    }
    else
    {
        printf("%d is Greater than %d", b, a);
    }
    return 0;
}
