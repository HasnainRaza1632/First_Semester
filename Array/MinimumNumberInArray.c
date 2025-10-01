#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[6] = {2, 66, 77, 88, 88, 55};
    int minimum = INT_MAX;
    for (int i = 0; i < 6; i++)
    {
        if (minimum > arr[i])
        {
            minimum = arr[i];
        }
    }
    printf("Minimum value in Array is : %d ", minimum);
    return 0;
}