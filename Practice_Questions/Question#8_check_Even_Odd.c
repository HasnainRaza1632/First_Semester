/*
Write a program that asks for two numbers and checks:

Are both numbers positive?

Is at least one number even?
*/
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("A and B are positive integers:%s", a > 0 && b > 0 ? "True\n" : "False\n");
    printf("At least one numbers is even:%s", a % 2 == 0 || b % 2 == 0 ? "True\n" : "False\n");
}
