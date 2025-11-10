#include <stdio.h>

int main()
{
    int number ; 


    do
    {
         printf("Enter Number : "); 
         scanf("%d" , &number ) ; 
    }
    while(number < 2 );


    for(int i = 2 ; i < number ; i++)
    {
        if(number%i == 0)
        {
            printf("%d is composite number : " , number );
            return 0 ;
        }
    }
        printf("%d is Prime number : " , number ) ; 
        return 0 ;
}