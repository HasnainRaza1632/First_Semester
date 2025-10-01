#include <stdio.h>
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    for (int i = 0; i <= 6; i++)
    {
        if (i % 2 == 0)
        {

            arr[i] += 10;
        }
        else
        {
            arr[i] *= 2;
        }
    }
    for (int j = 0; j < 7; j++)
    {
        printf("%d ", arr[j]);
    }

    return 0;
}