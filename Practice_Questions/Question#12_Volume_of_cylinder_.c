
// Calculate the area of a circle and modify the same program to calculate the
//  volume of a cylinder given its radius and height.

// Problem A

#include <stdio.h>
#define PI 3.14
int main()
{

	float radius;
	Printf("Enter Radius Of Circle :");
	scanf("%f", &radius);

	printf("Area of Circle is:%.2f", PI * radius * radius);
	return 0;
}

// Problem B

#include <stdio.h>
#define PI 3.14
int main()
{

	float radius, height;
	printf("Enter Radius Of Cylinder:");
	scanf("%f", &radius);

	printf("Enter Height of Cylinder:");
	scanf("%f", &height);

	printf("Volume of cylinder:%.2f", PI * radius * radius * height);
	return 0;
}