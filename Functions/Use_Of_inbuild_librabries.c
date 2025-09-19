#include <stdio.h>
#include <math.h>
float square_root(int n)
{
    return sqrt(n);
}
float power_function(int index, int power)
{
    return pow(index, power);
}
int main()
{
    int choice;
    printf("Enter 1 for square root and 2 for power function: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        int n;
        printf("Enter number to find square root: ");
        scanf("%d", &n);
        printf("Square root of %d is = %.0f", n, square_root(n));
        break;
    case 2:
        int index, power;
        printf("Enter index: ");
        scanf("%d", &index);
        printf("Enter power: ");
        scanf("%d", &power);
        printf("%d to the power %d is = %.0f", index, power, power_function(index, power));
        break;

    default:
        printf("Invalid input");
        break;
    }
    return 0;
}