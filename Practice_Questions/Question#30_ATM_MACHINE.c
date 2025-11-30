#include <stdio.h>

	void depositeamount(float *balance);
	void checkBalance(float *balance);
	void cashWithdrawl(float *balance);
	
int main()
{
	int choice ;
	float balance = 1000 ;
	
	while(1)
	{
	printf("1)Cash Withdrawl\n2)Balance Enquiry\n3)Despoite\n4)Exit\n");
	scanf("%d" , &choice);
	
	switch(choice)
	{
		case 1 :
			cashWithdrawl(&balance);
			break;
		case 2 :
			checkBalance(&balance);
			break;
		case 3 :
			depositeamount(&balance);
			break;
		case 4 :
			return 0;
		default :
			printf("Invalid input");
	}
	}
		return 0;
}

void depositeamount(float *balance)
{
	if(depositeamount <= 0)
	{
		printf("Please Enter Valid Amount") ;
	}
	else
	{
		float depositeamount; 
		printf("Enter Deposite amount:");
		scanf("%f" , &depositeamount);
		*balance = depositeamount + *balance;
		printf("Your Current Balance: %.2f\n" , *balance);
	}
}
void checkBalance(float *balance)
{
	printf("Current Balance:%.2f\n" , *balance);
}
void cashWithdrawl(float *balance)
{
	float amount ; 
	printf("Enter Cash amount:");
	scanf("%f" , &amount) ; 
	if(amount > *balance)
	{
		printf("Insufficient *balance");
	}
	else 
	{
		*balance = *balance - amount ;
		printf("Your Remaning Balance:%.2f\n" , *balance);	
	}
}