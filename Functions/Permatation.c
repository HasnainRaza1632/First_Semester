/*
#include <stdio.h>
int Permatation_Function(int r, int n)
{
    int r_Fac = 1, n_fac = 1;
    for (int i = 1; i <= n; i++)
    {
        n_fac *= i;
    }
    for (int j = 1; j <= n - r; j++)
    {
        r_Fac *= j;
    }

    return n_fac / r_Fac;
}

void Error_Function(int r, int n)
{
    if (r > n)
    {
        printf("Error: n is always greater than r:");
        return;
    }
    else if (r < 0 || n < 0)
    {
        printf("Error: n and r must be non-negative numbers");
        return;
    }
    else
    {
        printf("Permatation of %d and %d is %d", n, r, Permatation_Function(r, n));
        return;
    }
}
int main()
{
    int n, r;
    printf("Enter value of n :");
    scanf("%d", &n);
    printf("Enter value of r :");
    scanf("%d", &r);
    Error_Function(r, n);
    return 0;
}
*/

// method 2
#include <stdio.h>
int factorail_function(int x)
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
    int n, r, n_fac, nr_fac;
    printf("Enter value of n :");
    scanf("%d", &n);
    printf("Enter value of r :");
    scanf("%d", &r);
    if (r > n || r < 0 || n < 0)
    {
        printf("Error:n is always greater than r && n and r must be non-negative");
    }
    else
    {
        nr_fac = factorail_function(n - r);
        n_fac = factorail_function(n);
        printf("Permatation of %d and %d is %d", n, r, n_fac / nr_fac);
    }
    return 0;
}