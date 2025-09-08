#include <stdio.h>
int main (){
    int  n ; 
    printf("Enter a value of n : ");
    scanf("%d", &n);
      if(n  <= 1  ){
            printf("%d is neither prime nor composite number" , n );
            return 0 ;
        }
    for(int i = 2 ; i <= n-1 ; i++){
	if(n%i == 0){
	printf("%d is a composite number" , n);
    return 0 ; 
	}
}
    printf("%d is a prime number" , n );
    return 0 ; 
}