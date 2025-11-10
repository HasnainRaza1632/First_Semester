#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	int key ;
	char plainText[100] ; 

	
	if(argc != 2)
		{
			printf("Usage : ./practice.exe key");
			return 0; 
		}

		key = atoi(argv[1]) ;
		
		printf("PlainText: ");
		scanf("%[^\n]" , plainText);

		printf("CipherText: ");

	for(int i = 0 , n = strlen(plainText); i < n ; i++ )
	{
		if(isdigit(argv[1][i]))
		{
			if(toupper(plainText[i]))
			{
				char c = ( (plainText[i] - 'A' + key )%26) + 'A';
				printf("%c" , c) ; 
			}
			if (tolower(plainText[i]))
			{
				char c = ( (plainText[i] - 'a' + key )%26) + 'a';
				printf("%c", c) ; 
			}
		}
	}

		printf("\n");
	return 0;
}
