#include <stdio.h>
int main()
{
    int number, factorial = 1;
    printf("Enter number : ");
    scanf("%d", &number);
    if (number == 0)
    {
        printf("Factorial : 1");
        return 0;
    }
    else if (number < 0)
    {
        printf("Factorial not defined for negative numbers");
        return 0;
    }
    for (int i = 1; i <= number; i++)
    {
        factorial *= i;
	printf("%d! = %d\n" , i , factorial);
    }

    return 0;
}
