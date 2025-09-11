#include <stdio.h>
int main()
{
    int number, rev_number = 0, or_number;
    printf("Enter a number : ");
    scanf("%d", &number);
    or_number = number;
    int store_digit = 0;
    while (number != 0)
    {
        store_digit = number % 10;
        rev_number = rev_number * 10 + store_digit;
        number = number / 10;
    }
    printf("Sum of Reverse number and original is :%d", rev_number + or_number);

    return 0;
}