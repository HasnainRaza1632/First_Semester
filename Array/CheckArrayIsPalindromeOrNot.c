#include <stdio.h>
void SwapArray(int arr[], int size)
{
    int i = 0, j = size - 1;
    while (i < j)
    {
        if (arr[i] != arr[j])
        {
            printf("Given array is not Palindrome ");
            return;
        }

        i++;
        j--;
    }
    printf("Given Array is Palindrome");
}
int main()
{
    int arr[7] = {1, 2, 3, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    SwapArray(arr, size);
}