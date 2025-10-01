#include <stdio.h>
int main()
{
    int sum;
    int arr[5] = {1, 3, 5, 7, 10};
    for (int i = 0; i <= 4; i++)
    {
        sum += arr[i];
    }
    printf("Sum : %d", sum);
    return 0;
}