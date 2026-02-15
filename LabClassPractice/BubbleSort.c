#include <stdio.h>
#include <stdbool.h>

void swap(int *a , int *b)
{
    *a = *a + *b ; 
    *b = *a - *b ; 
    *a = *a - *b ; 
}

void bubbleSort(int arr[] , int arrSize)
{
    for(int i = 0 ; i < arrSize - 1 ; i++)
    {
        bool isSwap = false ;
        for(int j = 0 ; j < arrSize-i-1 ; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap)
        {
            return;
        }
    }
}

void printArray(int arr[], int sizeArr)
{
    for(int i = 0 ; i < sizeArr ; i++)
    {
        printf("%d " , arr[i]);
    }
}
int main(void)
{
    int arr[] = {5,3,8,4,2,6};
    int arrSize = sizeof(arr)/sizeof(arr[0]);

    //BubbleSort
    bubbleSort(arr,arrSize);
    //Print Array 
    printArray(arr,arrSize);

}