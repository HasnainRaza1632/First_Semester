#include <stdio.h>
#include <stdbool.h>
int main()
{
    int Size, Duplicate_element = 0;
    bool isPresent = false;
    printf("Enter Size of Array : ");
    scanf("%d", &Size);
    int arr[Size];
    for (int i = 0; i < Size; i++)
    {
        printf("Enter Value of Array At %d index : ", i);
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < Size; j++)
    {
        for (int k = j + 1; k < Size; k++)
        {
            if (arr[j] == arr[k])
            {
                isPresent = true ; 
               Duplicate_element = arr[k] ; 
                break;
            }
        }
    }
    if (isPresent == false)
    {
        printf("No any Duplicate number present in Array");
    }
    else
    {
        printf("%d is Duplicate Element", Duplicate_element);
    }
    return 0;
}