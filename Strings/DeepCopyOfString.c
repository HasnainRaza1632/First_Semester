#include <stdio.h>
#include <string.h>

int main()
{
    char str[] ="This is Hasnain Raza" ;
    int size = strlen(str); 
    
    char DeepCopy[size];
    for(int i = 0 ; i <= size; i++)
    {
        DeepCopy[i] = str[i];
    }

    printf("Real: %s\n" , str);
    printf("Deep Copy: %s" , DeepCopy);
    return 0;
}