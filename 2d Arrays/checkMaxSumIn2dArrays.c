#include<stdio.h>
#include<limits.h>
int main(){

    int arr[3][3] ={0,1,0,
                    0,1,0,
                    0,4,0 } ;
    int Max = INT_MIN  , index = -1 ; 
    for(int i = 0 ; i < 3 ; i++){
        int sum = 0 ;
        for(int j = 0 ; j < 3 ; j++){
              sum += arr[i][j] ;
              if(Max < sum){ 
                Max = sum ;
                index = i ; 
              } 
        }
    }
    printf("At index %d have sum : %d" , index , Max);
    return 0;
}