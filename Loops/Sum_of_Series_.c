#include <stdio.h>
int main()
{
    int number, sum = 0;
    printf("Enter term : ");
    scanf("%d", &number);

    // 1 - 2 + 3 - 4 + 5 ....n

    for (int i = 1; i <= number; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum - i;
        }
        else
        {
            sum = sum + i;
        }
    }

    printf("Sum : %d", sum);

    return 0;
}