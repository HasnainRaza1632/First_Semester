#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(int argc , char const *argv[])
{
    int sum = 0 ; 
    if(argc == 2)
    {
        for (int i = 0 , n = strlen(argv[1]) ; i < n; i++)
        {
           int result =  argv[1][n - 1 - i] - '0';
            result = result * pow(2,i);
            sum += result;
        }
        printf("Decimal :%d" , sum);
    }
    else
    {
        printf("Usage ./BitConverter \"Bits\"");
    }
}