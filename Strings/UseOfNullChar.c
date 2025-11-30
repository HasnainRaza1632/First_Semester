#include <stdio.h>

int main()
{
    char ch[] = "Use Of Special character" ;
    int i = 0;
    while (ch[i] != '\0')
    {
        printf("%c" , ch[i]);
        i++;
    }
    
}