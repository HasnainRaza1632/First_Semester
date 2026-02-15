//
// Created by Hasnain Raza on 05/12/2025.
//
#include <stdio.h>

int main() {
    struct date {
        int date;
        int month;
        int year;
    }a , b ;

    a.date = 10 ;
    a.month = 2 ;
    a.year = 2000;

    b.date = 11 ;
    b.month = 3;
    b.year = 2000;

    if (a.date == b.date) {
        printf("Equal!");
    }
    else {
        printf("Not Equal!");
    }
}