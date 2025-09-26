#include <stdio.h>
void swap(int* x, int* y) // int* ya intergers ka Data store krta ha || int** ya Pointers ka Data Store krta ha 
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main()
{
    int a, b ;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    swap(&a, &b);
    printf("Value of a = %d and b = %d", a, b);
    return 0;
}