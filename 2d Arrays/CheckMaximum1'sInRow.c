#include<stdio.h>
#include<limits.h>
int main(){

    int arr[3][3] ={0,1,0,
                    1,1,0,
                    1,1,1} ;
                  
    int max = -1 ; 
    int index = -1 ;
        for(int i = 0 ; i < 3 ; i++ ){
            int counter = 0  ; 
            for(int j = 0 ; j < 3 ; j++){
                if(arr[i][j] == 1){
                    counter++;
                }
            }
            if(counter > max ){
                max = counter ; 
                index = i ; 
            }
        }
    printf("Max 1's is in %d row there are %d 1's" , index , max) ;
    return 0;
}