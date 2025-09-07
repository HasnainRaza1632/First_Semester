#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a:");
    scanf("%d", &a);

    printf("Enter the value of b:");
    scanf("%d", &b);

    printf("Enter the value of c:");
    scanf("%d", &c);

    // Logic -->use nested loops to solve these problems
    
    if (a > b)
    {
        if (a > c)
        {
            printf("%d is Greater than %d and %d", a, b, c);
            return 0;
        }
    }
    if (b > a)
    {
        if (b > c)
        {
            printf("%d is Greater than %d and %d", b, a, c);
            return 0;
        }
    }
    if (c > a)
    {
        if (c > b)
        {
            printf("%d is Greater than %d and %d", c, a, b);
            return 0;
        }
    }
    if (a == b)
    {
        printf("%d is Greater value", a);
        return 0;
    }
    if (b == c)
    {
        printf("%d is Greater value", b);
        return 0;
    }
    else
    {
        printf("%d is Greater value", c);
    }
    return 0;
}