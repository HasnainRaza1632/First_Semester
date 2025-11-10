#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char Name[10] = "Hello!" ; 

    for(int i = 0 , n = strlen(Name) ; i < n ; i++ )
    {
        printf("%c" , tolower(Name[i]));
    }
}