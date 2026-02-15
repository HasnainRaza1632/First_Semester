#include <stdio.h>
#include <string.h>

int main() {
    struct Person {
        char name[50];
        int age;
        int salary;
    } emp1,emp2;

    strcpy(emp1.name,"Ali\n");
    emp2.age = 30;

    printf("%s" , emp1.name);
    printf("%d" , emp2.age);

    return 0;
}