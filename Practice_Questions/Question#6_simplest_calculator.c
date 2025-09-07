/*
Write a program that takes two numbers from the user and prints:
Sum
Difference
Product
Quotient
Remainder
*/
#include <stdio.h>

int main()
{

	int a, b;
	printf("Enter the value of a:");
	scanf("%d", &a);

	printf("Enter the value of b:");
	scanf("%d", &b);

	printf("Sum of a and b = %d\n", a + b);
	printf("Difference of a and b = %d\n", a - b);
	printf("Product of a and b = %d\n", a * b);
	printf("Quotient of a and b = %d\n", a / b);
	printf("Remainder of a and b = %d\n", a % b);

	return 0;
}
