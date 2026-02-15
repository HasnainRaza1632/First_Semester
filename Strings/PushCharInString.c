#include <stdio.h>
#include <string.h>

void Pushfun(char* str)
{
    int index ;
    char ch;

    printf("Index: ");
    scanf("%d" , &index);

    printf("Push Char: ");
    scanf(" %c" , &ch);

    for(int i = strlen(str); i >= index ; i--)
    {
        str[i+1] = str[i];
    }
    str[index] = ch;
    
}
int main()
{
    char str[] = "Collage";
    Pushfun(str);

    printf("%s" , str);
    return 0;
}