//
// Created by Hasnain Raza on 08/12/2025.
//

#include <stdio.h>

int main() {

    int arr[] = {10,20,30,40,50};
    int sizeArr = sizeof(arr) / sizeof(arr[0]);
        for (int i = 0 ; i < sizeArr ; i++) {
            printf("Element at index %d is %d\n" , i , arr[i]);
        }
    return 0;
}