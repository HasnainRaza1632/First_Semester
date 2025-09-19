/*#include <stdio.h>
#include <math.h>
void Error_Function(int r, int n)
{
    if (r > n)
    {
        printf("Error: r cannot be greater than n\n");
        return;
    }
    else
    {
        int Comb_Function(int r, int n);
        printf("Combination of %d and %d is : %d", n, r, Comb_Function(r, n));
        return;
    }
}

int Comb_Function(int r, int n)
{
    int n_fac = 1, r_fac = 1, nr_fac = 1;
    for (int i = 1; i <= n; i++)
    {
        n_fac *= i;
    }
    for (int j = 1; j <= r; j++)
    {
        r_fac *= j;
    }
    for (int k = 1; k <= n - r; k++)
    {
        nr_fac *= k;
    }
    return n_fac / (r_fac * nr_fac);
}

int main()
{
    int r, n;
    printf("Enter value of n :");
    scanf("%d", &n);
    printf("Enter value of r :");
    scanf("%d", &r);
    Error_Function(r, n);
    return 0;
} */

#include <stdio.h>
#include <math.h>
int factorail_fun(int x)
{
    int fac = 1;
    for (int i = 1; i <= x; i++)
    {
        fac *= i;
    }
    return fac;
}
int main()
{
    int n, r, n_fac = 1, r_fac = 1, nr_fac = 1;
    printf("Enter value of n : ");
    scanf("%d", &n);
    printf("Enter value of r : ");
    scanf("%d", &r);
    if (r > n || n < 0 || r < 0)
    {
        printf("Error: n must be greater than r and non-negative:");
    }
    else
    {
        n_fac = factorail_fun(n);
        r_fac = factorail_fun(r);
        nr_fac = factorail_fun(n - r);
        printf("Combination of %d and %d is %d", n, r, n_fac / (r_fac * nr_fac));
    }
}