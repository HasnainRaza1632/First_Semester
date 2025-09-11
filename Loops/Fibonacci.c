#include <stdio.h>
int main()
{
    int number, a = 1, b = 1, sum = 1;
    printf("Enter number : ");
    scanf("%d", &number);
    if (number < 0)
    {
        printf("Fibonacci not defined for negative numbers");
        return 0;
    }
    for (int i = 1; i <= number; i++)
    {
        if (i <= 2)
        {
            printf("%d " , sum);
        }
        else
        {
            sum = a + b;
            a = b;
            b = sum;
            printf("%d ",sum);
        }
    }
    return 0;
}
