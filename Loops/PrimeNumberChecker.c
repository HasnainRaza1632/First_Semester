#include <stdio.h>
int main(){
    int number , count = 0 ; 

    printf("Enter Any Number : ") ; 
    scanf("%d" , &number ) ;

    //define Edge Cases First 
    
    if(number == 1 ){
        printf("Composite Number \n") ; 
        return 0 ;
    }else if (number == 2 )
    {
        printf("Prime Number \n") ; 
        return 0 ;
    }else{
        for(int i = number-1 ; i > 1 ; i--){
            if(number%i == 0 ){
                count++;
                break;  
            }    
        }
    }
    //Print Condition checker 

    if(count > 0 ){
        printf("Composite Number \n") ; 
    }else if(count == 0 ){
        printf("Prime Number \n") ; 
    }
    return 0 ;
}
