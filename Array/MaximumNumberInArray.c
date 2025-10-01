#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[4] = {88, 2, 3, 4};
    int maximum = INT_MIN;
    for (int i = 0; i <= 3; i++)
    {
        if (maximum < arr[i])
            maximum = arr[i];
    }
    printf("Maximum Number in array is : %d", maximum);
    return 0;
}