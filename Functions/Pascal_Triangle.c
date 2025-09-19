#include <stdio.h>
#include <math.h>
int factorial(int x)
{
    int factorial = 1;
    if (x == 1 || x == 0)
    {
        return 1;
    }
    else
    {
        for (int i = 1; i <= x; i++)
        {
            factorial *= i;
        }
    }
    return factorial;
}
int main()
{
    int rows; // colunms;
    printf("Enter number of lines : ");
    scanf("%d", &rows);
    // printf("Enter number in line : ");
    // scanf("%d", &colunms);
    for (int i = 0; i < rows; i++)
    { // rows == n
        for (int j = 0; j <= i; j++)
        { // colunms == r
            int n_fac = factorial(i);
            int nr_fac = factorial(i - j);
            int r_fac = factorial(j);
            int ncr = n_fac / (r_fac * nr_fac);
            printf("%d ", ncr);
        }
        printf("\n");
    }
    return 0;
}