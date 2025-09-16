#include <stdio.h>
#include <math.h>
int main()
{
    int row;
    printf("Enter Number of lines:");
    scanf("%d", &row);

    if(row%2 == 0){
        printf("Error: This program is not valid for Even numbers!\n");
    }else{
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            int a = row / 2 + 1;
            if (j == a || i == a)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
    return 0;
}
