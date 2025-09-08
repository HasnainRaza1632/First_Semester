#include <stdio.h>
#include <math.h>
int main()
{
    float n;
    printf("Enter a value of n : ");
    scanf("%f", &n);
    // 100 , 50 , 25 , 12.5 .....
    // Gp = a * r^(n-1)
    // Gp = 100 * (1/2)^(n-1) this is the nth term of a GP
    // Gp = 100 * 0.5^(n-1)
    for (float i = 100.0; i >= 100 * pow(0.5, n - 1); i = i / 2)
    {
        printf("%.1f ", i);
    }
    return 0;
}