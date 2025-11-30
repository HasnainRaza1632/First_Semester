#include <stdio.h>
#include <string.h>

int main()
{

    char str[50] ; 
    
    printf("Sentence: ");
    scanf("%[^\n]" , str);

    int n = strlen(str);
    for (int i = n ; i >= 0 ; i--)
    {
        printf("%c" , str[i]);
    }
    
    
    return 0;
}