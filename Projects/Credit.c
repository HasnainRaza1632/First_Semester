#include  <stdio.h>

int main()
{
		long long CreditCard  ; 

	do
	{
		printf("Credit Card :");
		scanf("%lld" , &CreditCard) ; 
	
	} 
	while (CreditCard < 0 );
 
		long long tempCard ; 
		tempCard = CreditCard ;
		int length = 0 ;

	do
	{
		
		length++;
		tempCard /= 10 ;

	} while (tempCard > 0 );
	
	//Checker Card Valid or not 

	if(length != 13 && length != 15 && length != 16 )
	{
		printf("INVALID\n") ; 
		return 0; 
	}
	int sum1  = 0, sum2 = 0  , mod1 , mod2 ; 

	tempCard = CreditCard ; 

	do
	{
		mod1 = tempCard%10 ; 
		tempCard /= 10 ; 
		sum1 += mod1 ; 
		
		mod2 = tempCard%10 ; 
		tempCard /= 10 ; 
		mod2 *= 2 ; 
		
		if(mod2 > 9)
		{
			mod2 = mod2 - 9 ;
			sum2 += mod2 ;  
		}
		else 
		{
			sum2 += mod2 ; 
		}
	}
	while(tempCard > 0 ) ; 

	
    if ((sum1 + sum2) % 10 == 0)
    {
       long long cardIdentityChecker = CreditCard ;

        do
        {
            cardIdentityChecker = cardIdentityChecker / 10;
        }
        while (cardIdentityChecker >= 100);

        // VISA CHECKER
        if ((length == 13 || length == 16) && cardIdentityChecker / 10 == 4)
        {
            printf("VISA\n");
        }
        // American Express Checker
        else if ((length == 15) && (cardIdentityChecker == 34 || cardIdentityChecker == 37))
        {
            printf("AMEX\n");
        }
        // Master card checker
        else if (length == 16 && (cardIdentityChecker > 50 && cardIdentityChecker < 56))
        {
            printf("MASTERCARD\n");
        }
		// Discover 
		else if(length == 16 && (cardIdentityChecker >= 60 && cardIdentityChecker <= 65 ))
		{
			printf("DISCOVER") ; 
		}
        // Invalid
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}