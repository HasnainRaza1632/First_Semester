#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter Number of Rows : ");
    scanf("%d", &n);
    printf("Enter Number of Coloums : ");
    scanf("%d", &m);
    int matrix[n][m];
    int matrix2[n][m];

    // Making 2d array and Store user Input value in Each row and colounms
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    // Store User Input Value in Second Array
    //	int i  , j ;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Adding Both Arrays & printing Sum of Both Array

    //	int i  , j ;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", matrix[i][j] + matrix2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
