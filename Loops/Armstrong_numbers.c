#include <stdio.h>
#include <math.h>
int main()
{
    for (int i = 1; i <= 500; i++)
    {
        int n = i, sum = 0;
        while (n > 0)
        {
            int digit = n % 10;
            sum += pow(digit, 3);
            n /= 10;
        }
        if (sum == i)
        {
            printf("%d ", i);
        }
    }
    return 0;
}