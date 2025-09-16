#include <stdio.h>
#include <math.h>
int main()
{
    int row;
    printf("Enter Number of lines:");
    scanf("%d", &row);
    // row = row + 64; // to convert into ASCII value of capital letter
    for (int i = 1; i <= row; i++)
    {
        int a = 1;
        for (int j = 1; j <= row; j++)
        {
            int d = a + 64;
            char ch = (char)d;
            printf("%c ", ch);
            a++;
        }
        printf("\n");
    }

    return 0;
}
