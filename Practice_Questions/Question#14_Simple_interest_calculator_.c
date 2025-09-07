
// Write a program to calculate simple interest for a set of values representing
// principal, number of years and rate of interest.

#include <stdio.h>
int main()
{
	float P, R, T, S;

	printf("Enter Principle Value of Simple Interest:");
	scanf("%f", &P);

	printf("Enter Rate of Simple interest:");
	scanf("%f", &R);

	printf("Enter Years:");
	scanf("%f", &T);

	printf("Simple interest Become:%.2f\nTotal amount Become:%.2f", P * R * T / 100.0, P * R * T / 100.0 + P);

	return 0;
}