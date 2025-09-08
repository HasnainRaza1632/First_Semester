#include<stdio.h>
int main(){
    int n ; 
    printf("Enter a value of n : ");
    scanf("%d", &n);
    // 4 , 7 , 10 , 13 ...... 
    // Ap = a + (n-1)d
    // Ap = 4 + 3n - 3 
    // Ap = 3n + 1  this is the nth term of an AP 
    for(int i = 4 ; i <= 3*n+1 ; i = i+3 ){
        printf("%d " , i );
    }
    return 0;
}