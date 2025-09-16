#include <stdio.h>
#include <math.h>
int main()
{
    int row;
    printf("Enter Number of lines:");
    scanf("%d", &row);
    for (int i = 1; i <= row; i++)
    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            int d = a + 64;
            char ch = (char)d;
            if (i % 2 != 0)
            {
                printf("%d", j);
            }
            else
            {
                printf("%c", ch);
            }
            a++;
        }
        printf("\n");
    }

    return 0;
}
