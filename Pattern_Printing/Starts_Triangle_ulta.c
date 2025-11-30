#include <stdio.h>
#include <math.h>
int main()
{

    int rows, columns;
    printf("Enter Number of lines: ");
    scanf("%d", &rows);
    
    // printf("Enter Number of start in line: ");
    // scanf("%d", &columns);

    for (int i = rows; i >= 1; i--)
    {
        for (int j = 5; j >= i; j++)
        {
            printf("%d" , j);
        }
        printf("\n");
    }
    return 0;
}
