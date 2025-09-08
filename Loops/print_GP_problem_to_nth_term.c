#include <stdio.h>
#include <math.h>
int main(){
    int n ; 
    // 1 , 2 , 4 , 8 , 16 .....
    // Gp = a * r^(n-1)
    // Gp = 1 * 2^(n-1) this is the nth term of a GP
    // Gp = 2^(n-1)
    printf("Enter a value of n : ");
    scanf("%d", &n);
    for(int i = 1 ; i <= pow(2, n - 1 ) ; i = i*2){
        printf("%d " , i );
    }
    return 0 ; 
}