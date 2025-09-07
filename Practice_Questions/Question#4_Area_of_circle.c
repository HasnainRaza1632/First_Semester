
// Define PI as a constant (#define PI 3.14159).
// Ask the user for the radius of a circle and print the area using:

#include <stdio.h>
int main()
{

	const float pi = 3.14159;
	printf("Enter Radius of circle :");
	int Radius;
	scanf("%d", &Radius);
	printf("Area of Circle is : %F", pi * Radius * Radius);

	return 0;
}