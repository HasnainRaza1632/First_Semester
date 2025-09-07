/*
🔢 Calculator Functions
Addition
→ Takes two numbers and returns their sum.
Subtraction
→ Takes two numbers and returns the difference.
Multiplication
→ Takes two numbers and returns the product.
Division
→ Takes two numbers and returns the quotient (handle decimals).
Remainder (Modulus)
→ Takes two integers and returns the remainder.
Area of Circle (uses constant PI)
→ Takes radius and calculates PI * radius * radius.
Check Positive/Negative
→ Checks if a number is greater than zero (relational operator).
Check Even/Odd
→ Uses modulus operator %.
Increment/Decrement Demonstration
→ Shows result of a++ vs ++a.
Comparison
→ Compares two numbers (==, >, <) and shows result.
*/

#include <stdio.h>
#define pi 3.14159
int main()
{

    int a, b, choice, radius;
    printf("1)Addition\n2)Subtraction\n3)Division\n4)Remainder\n5)Check even /Odd\n6)Area of Circle\n");
    scanf("%d", &choice);

    // choice input 1 - 6
    if (choice > 0 && choice < 6)
    {

        printf("Enter Two number :");
        scanf("%d %d", &a, &b);
    }

    switch (choice)
    {

    case 1:
        printf("Sum is:%d", a + b);
        break;

    case 2:
        printf("Difference is:%d", a - b);
        break;

    case 3:
        printf("Division is:%d", a / b);
        break;

    case 4:
        printf("Reminder is:%d", a % b);
        break;

    case 5:
        printf("Even or Odd:%s", a % 2 && b % 2 ? "True" : "False");
        break;
    case 6:
        printf("Enter Radius of Circle:");
        scanf("%d", &radius);
        printf("Area of Circle is: %.2f", pi * radius * radius);
        break;
    default:
        printf("Inavalid choice, please select between 1 to 6");
        break;
    }

    return 0;
}
