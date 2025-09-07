/*
Write a program that takes two integers and checks:

Is the first number greater than the second?

Are they equal?
*/
#include <stdio.h>

int main()
{

	int a, b;
	printf("Enter the value of a");
	scanf("%d", &a);

	printf("Enter the value of b");
	scanf("%d", &b);

	printf("A is greater than B:%s", a > b ? "True" : "False");

	return 0;
}
