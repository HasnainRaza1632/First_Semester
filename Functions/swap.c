/*#include <stdio.h>
int main(){
    int a , b , temp ;
    printf("Enter value of a :");
    scanf("%d" , &a);

    printf("Enter value of b :");
    scanf("%d" , &b);
    temp = a ;  // temp  = a ;  , temp = 1 ; , a = 1 , b = 2
    a = b ;
    b = temp ;
    printf("Swap value of a and b , now %d is a and %d is b:" , a , b );
    return 0;
}
*/
// USing Pointers
#include <stdio.h>
int swap(int *x, int *y)
{
    int temp;
    temp = *x; // temp = 1 , x = 1
    *x = *y;   // x = 2
    *y = temp; // y = 1
    return 0;
}
int main()
{
    int a, b;

    printf("Enter value of a :");
    scanf("%d", &a);
    printf("Enter value of b :");
    scanf("%d", &b);
    swap(&a, &b);
    printf("Value of a is %d and b is %d ", a, b);
    return 0;
}