#include <stdio.h>
int main()
{
    int number, rev_number = 0;
    printf("Enter a number : ");
    scanf("%d", &number);
    int store_digit = 0;
    while (number != 0)
    {
        store_digit = number % 10;
        rev_number = rev_number * 10 + store_digit;
        number = number / 10;
    }
    printf("Reverse number : %d", rev_number);
    return 0;
}