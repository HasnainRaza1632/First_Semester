#include<stdio.h>
void RotateArray(int arr[] , int i , int j){
        while (i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp ;
            i++;
            j--;
        }
        
}
int main(){
    int k = 2 ; 
    int arr[7] = {1 , 2 , 3 , 4 , 5 , 6, 7};
    int size = (sizeof(arr) / sizeof(arr[0])) - 1  ; 
    k = k % size;
    RotateArray(arr,0,size);
    RotateArray(arr,0,k-1);
    RotateArray(arr,k,size);
    for(int i = 0 ; i <= size ; i++){
        printf("%d " , arr[i]);
    }

}   