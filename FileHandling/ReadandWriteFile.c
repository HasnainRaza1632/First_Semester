#include <stdio.h>
int main()
{
    FILE* file = fopen("readAndWrite.txt" , "a+");
    char str[100];
    while(fgets(str,100,file) != NULL){
        printf("%s" , str);
    }
}