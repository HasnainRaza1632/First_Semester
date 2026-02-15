#include <stdio.h>
	
int main()
{
 
   int rotation ;
   int arr[5] = {1,2,3,4,5};
   int j = sizeof(arr) / sizeof(arr[0]);
	int i = 0 ;

   while (i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp ;
            i++;
            j--;
        }
	for(int i = 0 ; i < 5 ; i++ )
	{
		printf("%d ", arr[i]);
	}
}


