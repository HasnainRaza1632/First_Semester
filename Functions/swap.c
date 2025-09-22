#include <stdio.h>
int main(){
    int a , b , temp ;
    printf("Enter value of a :");
    scanf("%d" , &a);

    printf("Enter value of b :");
    scanf("%d" , &b);

    temp = a ; 
    a = b ; 
    b = temp ;

    printf("Swap value of a and b , now %d is a and %d is b:" , a , b );
    return 0;
}