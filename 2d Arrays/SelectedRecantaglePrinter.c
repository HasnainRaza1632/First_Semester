#include <stdio.h>
#include <limits.h>
int main()
{
    int n, m;
    printf("Enter Number of Rows : ");
    scanf("%d", &n);
    printf("Enter Number of Coloums : ");
    scanf("%d", &m);
    int matrix[n][m];

    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int Ending_I, Ending_J, Starting_I, Starting_J;
    printf("Enter Starting Cordinates : ");
    scanf("%d %d", &Starting_I, &Starting_J);
    printf("Enter Ending Cordinates : ");
    scanf("%d %d", &Ending_I, &Ending_J);
    for (int i = Starting_I; i <= Ending_I; i++)
    {
        for (int j = Starting_J; j <= Ending_J; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
