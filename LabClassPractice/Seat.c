//
// Created by Hasnain Raza on 03/12/2025.
//
#include <stdio.h>
#include <string.h>

int main(void) {
    int seats = 40 ;
    int windowSeatcounter;
    int asileSeatCounter;

    for (int i = 0 ; i < seats ; i++) {
        if (i%5 == 0) {
            printf("WindowSeat\n");
            windowSeatcounter++;
        }
    }
    return 0;
}