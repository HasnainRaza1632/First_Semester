#include <stdio.h>
#include <math.h>
int main()
{
    int row;
    printf("Enter Number of lines:");
    scanf("%d", &row);

    for (int i = 1; i <= row; i++)
    {
        for (int s = 1 ; s <= row - i; s++)
        {
            printf(" ");
        }
        for (int j = 1 ; j <= i; j++ )
                {
                    printf("* ") ;
                }
            
            printf("\n");
            }

        return 0;
}
