#include <stdio.h>
int main(){
    int a , b , c ;
    printf("Enter value of a :");
    scanf("%d" , &a);

    printf("Enter value of b :");
    scanf("%d" , &b);

    c = a ; 
    a = b ; 
    b = c ;

    printf("Swap value of a and b , now %d is a and %d is b:" , a , b );
    return 0;
}