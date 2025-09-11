#include<stdio.h>
#include<math.h>
int main()
{
    int number, number2 ;
    printf("Enter First number: ");
    scanf("%d", &number);
    printf("Enter Second number : ");
    scanf("%d", &number2);
    
    printf("%d to the power %d is = %.0f" , number , number2 , pow(number , number2) );

    return 0;
}
