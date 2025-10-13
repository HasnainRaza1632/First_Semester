#include <stdio.h>
int main(){
	int n, m , sum = 0 ; 
    printf("Enter Number of Rows : ");
    scanf("%d", &n);
    printf("Enter Number of Coloums : ");
    scanf("%d", &m);
    int matrix[n][m];
    
     int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    //Print Sum of 2d Array
    for(i = 0 ; i  < n ; i++ ){
    	for(j = 0 ;  j < m ; j++){
			sum += matrix[i][j] ; 
		}
	}
	
	printf("Sum of Array is %d " , sum) ; 
    
}
