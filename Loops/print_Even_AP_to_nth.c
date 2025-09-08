#include <stdio.h>
int main()
{
    int n;
    printf("Enter a value of n : ");
    scanf("%d", &n);
    // 1 3 5 7 ......
    // Ap = a + (n-1)d
    // Ap = 2 + 2n -2
    // Ap = 2n this is the nth term of an AP
    for (int i = 2; i <= 2 * n; i = i + 2)
    {
        printf("%d ", i);
    }
    return 0;
}
