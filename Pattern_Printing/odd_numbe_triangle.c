#include <stdio.h>
#include <math.h>
int main()
{
    int row;
    printf("Enter Number of lines:");
    scanf("%d", &row);

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= 2 * i - 1; j = j + 2)
        {
            // if u use j++ it wil print all number so use if to print odd number or use j = j+2 ; both are correct
            //  if (j % 2 != 0)
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
