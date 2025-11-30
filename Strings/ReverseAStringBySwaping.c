#include <stdio.h>
#include <string.h>

int main()
{
    char str[50] ;

    printf("Enter String: ");
    scanf("%[^\n]s" , str);

    int sizeOFStr = strlen(str);

    //Logic of Swaping 

    for(int i = 0 , j = sizeOFStr - 1; i <= j ; i++ , j--)
    {
        char temp = str[i]; 
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reverse: %s" , str);

    return 0;
}