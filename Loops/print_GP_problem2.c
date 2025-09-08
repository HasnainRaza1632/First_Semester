#include <stdio.h>
#include <math.h> 
int main(){
    int n ;
    printf("Enter a value of n : ");
    scanf("%d", &n);
    // 3 , 12 , 48 , 192 ..... 
    // Gp = a * r^(n-1) 
    // Gp = 3 * 4^(n-1) this is the nth term of a GP
    for(int i = 3 ; i <= 3 * pow(4 , n - 1  ) ; i = i * 4 ){
        printf("%d " , i );
    }
    return 0 ; 
}