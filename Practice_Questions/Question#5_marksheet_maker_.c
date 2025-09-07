/*
Write a program that declares:

an int (roll number)

a float (marks)

a char (grade)

Take input for each one from the user and print them in this format:
Roll No: 101
Marks: 87.5
Grade: A
*/
#include <stdio.h>
int main()
{
	int roll_number;
	float marks;
	char grade;

	printf("Enter your Roll number :");
	scanf("%d", &roll_number);

	printf("Enter your Marks :");
	scanf("%f", &marks);

	printf("Enter your Grade:");
	scanf(" %c", &grade);

	// Output Formation

	printf("Roll No:%d\nMarks:%.1f\nGrade:%c\n", roll_number, marks, grade);

	return 0;
}
