#include <stdio.h>
int main(){
    
    int r , c ; 

    printf("Enter Number of rows in Matric : ") ;
    scanf("%d" , &r) ; 

    printf("Enter number of colounms in matric : ") ;
    scanf("%d" , &c) ; 

    int arr[r][c] ; 
    int TraArr[c][r]  ; 

    //Take Input From User 

    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            printf("Enter (%d , %d) element of matric : " , i , j ) ; 
            scanf("%d" , &arr[i][j]) ; 
        }
    }

    //Store Transpose of This matric in another matric 

    for(int i = 0 ; i < c ; i++ ){
        for(int j = 0 ; j < r ; j++){
            TraArr[i][j] = arr[j][i] ; 
        }
    }

    //Print Transfose of Matric 

    for(int i = 0 ; i < c ; i++){
        for(int j = 0 ; j < r ; j++){
            printf("%d " , TraArr[i][j]) ; 
        }
        printf("\n");
    }
    return 0 ; 
}