#include <stdio.h>
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int ReverseArr[6];
    for (int i = 0; i <= 5; i++)
    {
        ReverseArr[5 - i] = arr[i];
    }
    for (int k = 0; k <= 5; k++)
    {
        arr[k] = ReverseArr[k];
    }
    for (int j = 0; j <= 5; j++)
    {
        printf("%d ", arr[j]);
    }

    return 0;
}