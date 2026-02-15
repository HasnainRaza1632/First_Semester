//
// Created by Hasnain Raza on 03/12/2025.
//

#include <stdio.h>

void swapUsingwithoutTemp(int *num1 , int *num2) {
    *num1 = *num1 + *num2 ;
    *num2 = *num1 - *num2 ;
    *num1 = *num1 - *num2 ;
}
void swapingWithtemp(int *num1 , int *num2) {
    int temp = *num1 ;
    *num1 = *num2;
    *num2 = temp ;
}
int main(void) {
    int num1, num2;
    printf("Enter First number: ");
    scanf("%d", &num1);

    printf("Enter Second number: ");
    scanf("%d", &num2);

    // int temp = num1 ;
    // num1 = num2 ;
    // num2 = temp ;

    //Method two
    swapingWithtemp(&num1, &num2);
    printf("%d %d" , num1 , num2);
    return 0;
}