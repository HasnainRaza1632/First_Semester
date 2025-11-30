#include <stdio.h>
#include <math.h>
int main()
{

    int rows;
    printf("Enter Number of lines: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
