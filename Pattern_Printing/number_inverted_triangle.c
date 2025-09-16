#include <stdio.h>
#include <math.h>
int main()
{
	int row , columns ; 
	printf("Enter Number of lines:");
	scanf("%d" , &row);
	
	for(int i = row ; i >= 1  ; i--){
	for(int j = 1 ; j <= i ; j++){
	printf("%d " , j);
}
	printf("\n");
}
       return 0;
}
