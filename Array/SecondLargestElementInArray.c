#include<stdio.h>
#include<limits.h>
int main(){
    int arr[8] = {1 , 2 ,3 ,4 , 5 , 6 ,7 , 8};
    int Maximum = INT_MIN ;
    int SecondMaximum = INT_MIN ;
    for(int i = 0 ; i <= 7 ; i++){
        if(Maximum < arr[i]){
                Maximum = arr[i] ; 
        }
    }for(int j = 0 ; j<=7 ; j++){
        if(arr[j]!= Maximum && SecondMaximum < Maximum){
            SecondMaximum = arr[j];
        }
    }
    printf("Second Largest Element in Array is : %d " , SecondMaximum);
    return 0;   
}