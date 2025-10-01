#include <stdio.h>
int main()
{
    int arr[6] = {1, 3, 5, 7, 8, 2};
    // Even index sum = 1 + 5 + 8 = 14
    // Odd index sum = 3 + 7 + 2 = 12 // 14 - 12 = 2
    int EvenSum = 0, OddSum = 0;
    for (int i = 0; i <= 5; i++)
    {
        if (i % 2 == 0)
        {
            EvenSum += arr[i];
        }
        else
        {
            OddSum += arr[i];
        }
    }
    printf("Difference of Even indexs and Odd indexs is : %d", EvenSum - OddSum);
    return 0;
}