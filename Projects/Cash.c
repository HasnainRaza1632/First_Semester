#include <stdio.h>

int main()
{
    int quartersDollar = 25, dimes = 10, nickels = 5, pennies = 1;
    int CoinCounter = 0;
    int changeOwn;
    do
    {
        printf("Change owed :");
        scanf("%d", &changeOwn); 
    }
    while (changeOwn < 1);

    while (changeOwn > 0)
    {

        if (changeOwn >= quartersDollar)
        {
            changeOwn -= quartersDollar;
            CoinCounter++;
        }
        else if (changeOwn >= dimes)
        {
            changeOwn -= dimes;
            CoinCounter++;
        }
        else if (changeOwn >= nickels)
        {
            changeOwn -= nickels;
            CoinCounter++;
        }
        else if (changeOwn >= pennies)
        {
            changeOwn -= pennies;
            CoinCounter++;
        }
    }

    printf("%d\n", CoinCounter);

    return 0;
}
