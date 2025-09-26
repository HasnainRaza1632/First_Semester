#include <stdio.h>
int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter value of %d number : ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < 35)
        {
            printf("index:%d\n", i);
        }
    }
    return 0;
}