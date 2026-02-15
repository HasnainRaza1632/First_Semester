#include <stdio.h>
#include <string.h>

int main() {
    struct book {
        char name[50];
        float price;
        int pages;
    }pfbook,ictbook;

    strcpy(pfbook.name,"Fundamentals Of C language");
    pfbook.price = 1500;
    pfbook.pages = 200;

    strcpy(ictbook.name,"Fundamental of Ms Office.");
    ictbook.price = 1200;
    ictbook.pages = 150;

    printf("%s\n" , ictbook.name);
    printf("%.2f\n" , ictbook.price);
    printf("%d" , ictbook.pages);
}