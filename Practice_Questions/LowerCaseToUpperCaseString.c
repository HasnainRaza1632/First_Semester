#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char name[10] ; 
    printf("Name :");
    scanf("%[^\n]" , &name);

    for(int i = 0 , n = strlen(name) ; i < n ; i++ )
    {
        if(name[i] >= 'A' && name[i] <= 'Z')
        {
            printf("%c" , name[i] + 32) ;
        }
        else
        {
            printf("%c" , name[i]); 
        }
    }
}