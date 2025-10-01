#include <stdio.h>
void SwapArray(int arr[])
{
    int i = 0, j = 4;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    SwapArray(arr);
    for (int j = 0; j <= 4; j++)
    {
        printf("%d ", arr[j]);
    }
}