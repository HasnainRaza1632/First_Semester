#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void depositeMoney(){
    FILE* file = fopen("money.txt" , "r");
    int CurrentAmount = 0;
    int userEnterAmount ;
    int amount;
    char line[1024];

    while (fgets(line, sizeof(line) , file) != NULL)
    {
        if(sscanf(line,"%d" ,&CurrentAmount) == 1){

        }
    }
    fclose(file);

    file = fopen("money.txt","w");

    //Get amount from User
    printf("Enter Deposit Amount: ");
    scanf("%d" , &userEnterAmount);

    CurrentAmount += userEnterAmount ; 

    //Update money file 

    fprintf(file,"%d" , CurrentAmount);
    printf("Deposite is Succesfully Added....!");
    printf("\nCurrent Amount:%d" , CurrentAmount);
    
}

void checkCurrentAmount()
{
    int currentAmount;

    FILE* file = fopen("money.txt" , "r");

    char line[1024] ;
    while(fgets(line , sizeof(line) , file) != NULL )
    {
        if(sscanf(line ,"%d" , &currentAmount) == 1 ){

        }
    }
    fclose(file);
    printf("Your Current Amount: %d" , currentAmount);
}

void withdrawlAmount(){
    int withdrawlAmount ; 
    int amount ;
    int totalAmount = 0 ;
    
    printf("Enter Withdrawl amount: ");
    scanf("%d" , &withdrawlAmount);

    FILE* file = fopen("money.txt" , "r");
    char line[102];
    while(fgets(line , sizeof(line) , file) != NULL){
        if(sscanf(line ,"%d" , &amount) == 1){
            
        }
    }
    fclose(file);
    totalAmount = amount - withdrawlAmount;

    file  = fopen("money.txt" , "w");

    fprintf(file,"%d" , totalAmount);
    printf("Current Amount: %d" , totalAmount);
    fclose(file);
    
}
int main(){

    while(1)
    {
        int choice ;  

        printf("\n1)Deposite Money\n2)Check Current amount\n3)Withdrawl amount\n4)Exit\n");
        scanf("%d" ,&choice);

    switch (choice)
    {
    case 1:
        depositeMoney();
        break;
    case 2:
        checkCurrentAmount();
        break;
    case 3: 
        withdrawlAmount();
        break;
    case 4:
        return 0 ;
    default:
        break;
    }
    }
    
}