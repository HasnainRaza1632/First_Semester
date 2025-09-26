#include <stdio.h>
#include <math.h>
int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
        return b;
}
int hcf(int x, int y)
{
    int hcf;
    for (int i = min(x, y); i >= 1; i--)
    {
        if (x % i == 0 && y % i == 0)
        {
            hcf = i;
            break;
        }
    }
    return hcf;
}
int main()
{
    int a, b;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    printf("Hcf of %d and %d is: %d", a, b, hcf(a, b));
    return 0;
}