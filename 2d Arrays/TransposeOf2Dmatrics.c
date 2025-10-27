#include <stdio.h>
int main(){
    
    int arr[3][3] = {1,2,3,4,5,6,7,8,9} ; 

    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){

            //Transpose of arr[3][3] is 
            
            printf("%d " , arr[j][i]) ;
        }
        printf("\n");
    }
    return 0 ; 
}