#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char Bits[100];
    printf("Binary: ");
    scanf("%[^\n]" , &Bits);

    int sum = 0;

    int n = strlen(Bits);

    for (int i = 0; i < n; i++)
    {
        int d = Bits[n - i - 1] - '0'; // convert char to int, right-to-left
        sum += d * pow(2, i);
    }
    printf("Decimal = %d\n", sum);
    return 0;
}
