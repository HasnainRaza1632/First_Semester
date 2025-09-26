#include <stdio.h>
int swap(int *a, int *b)
{
    *a = *a + *b; // *a = 1 , *b = 2 , *a = 1 + 2  , *a = 3
    *b = *a - *b; // 3 - 2  = 1
    *a = *a - *b; // 3 - 1 = 2
    return 0;
}
int main()
{
    int a, b;
    printf("Enter Value of a :");
    scanf("%d", &a);
    printf("Enter value of b :");
    scanf("%d", &b);
    swap(&a, &b);
    printf("Value of a is %d and b is %d", a, b);
    return 0;
}