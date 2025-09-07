// Write a program that asks the user for their name and then prints:
#include <stdio.h>
int main()
{
    char name[50]; // Declare a character array to hold the name
    printf("what is your name ? ");
    scanf("%s", name);
    printf("My name is %s ", name);
    return 0;
}
