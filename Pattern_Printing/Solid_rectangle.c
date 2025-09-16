#include <stdio.h>
#include <math.h>
int main()
{
    int rows, columns;
    printf("Enter Number of lines: ");
    scanf("%d", &rows);
    printf("Enter Number of start in line: ");
    scanf("%d", &columns);
    for (int i = 1; i <= rows; i++)
    {
        for (int i = 1; i <= columns; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
