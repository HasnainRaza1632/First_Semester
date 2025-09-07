
// Write a program to convert Celsius (Centigrade degrees temperature to
// Fahrenheit).

#include <stdio.h>
int main()
{
	float Cel;
	printf("Enter Celsius :");
	scanf("%f", &Cel);

	printf("In Fahrenheit:%.2f", (9 / 5 * Cel) + 32);
	return 0;
}
