#include <stdio.h>
#include <limits.h>
int main()
{
    int n, m , indexJ = 0, indexI = 0;
    int Max = INT_MIN;
    printf("Enter Number of Rows");
    scanf("%d", &n);
    printf("Enter Number of Coloums");
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

    // Check_Max Element in Array

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (Max < matrix[i][j])
            {
                Max = matrix[i][j];
                indexI = i;
                indexJ = j;
            }
        }
    }

    printf("Maximume Element on this Array is %d and Index is (%d , %d)", Max, indexI, indexJ);
}
