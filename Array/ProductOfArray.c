#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 1, 2};
    int product = 1 ;
    for (int i = 0; i <= 4; i++)
    {
        product *= arr[i];
    }
    printf("Product of Arrays Elements is : %d", product);
    return 0;
}