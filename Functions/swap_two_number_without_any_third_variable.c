#include <stdio.h>
int swap(int a, int b)
{

    b = b + a; // b = 1 + 2 = 3 ;
    a = b - a; // a = 3 - 2  = 1 ;
    b = b - a; // b = 3 - 1 = 2 ;
    printf("Values of a and b after swaping is A = %d & B = %d", a, b);

    return 0;
}
int main()
{

    int a, b, temp;
    printf("Enter value of a :"); // a = 2
    scanf("%d", &a);

    printf("Enter value of b :"); // b = 1
    scanf("%d", &b);

    swap(a, b);

    return 0;
}