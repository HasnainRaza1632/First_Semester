//
// Created by Hasnain Raza on 05/12/2025.
//

#include <stdio.h>
#include <string.h>

int main() {
    typedef struct crickerters {
        char name[30];
        int age ;
        int numberOfmatches;
        float average;
    }cricketer;

    cricketer arr[20];

    for (int i = 0 ; i < 20 ; i++) {
        printf("==========================\n            Record: %d      \n==========================\n",i+1);
        printf("Name: ");
        scanf(" %[^\n]" ,arr[i].name);
        printf("Age: ");
        scanf("%d" , &arr[i].age);
        printf("Number of Matches: ");
        scanf("%d" ,&arr[i].numberOfmatches);
        printf("Average Runs in Matches: ");
        scanf("%f" , &arr[i].average);
    }

    for (int i = 0 ; i < 20 ; i++) {
        printf("==========================\n            Record: %d      \n==========================\n",i+1);
        printf("Name: %s\n" , arr[i].name);
        printf("Age: %d\n" ,arr[i].age);
        printf("Number Of matches: %d\n" ,arr[i].numberOfmatches);
        printf("Average Runs: %f\n" , arr[i].average);
    }
    return 0;
}