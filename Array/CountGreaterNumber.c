#include <stdio.h>
int main()
{
    int arr[6] = {8, 4, 5, 6, 7, 8};
    int x , count = 0;
    printf("Enter number :");
    scanf("%d", &x);
    for (int i = 0; i <= 5; i++)
    {
        if (arr[i] > x)
        {
            count++;
        }
    }
    printf("%d ", count);
    return 0;
}