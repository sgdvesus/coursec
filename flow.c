#include <stdio.h> 
int funds = 3000;
int user;
int clabe, send, deposit, refund, currentBalance;

int main(){
    printf("Welcome, Sgdvesus! choose an option:\n");
    printf("[0]Transfer\n[1]Deposit\n[2]Retirar\n");
    scanf("%d", &user);

    if(user == 0){
	printf("[CLABE]: ");
	scanf("%d", &clabe);
	printf("Amount to send $");
	scanf("%d", &send);
	printf("You send %d to [CLABE]: %d\n", send, clabe);
	currentBalance = funds - send;
	printf("Your balance is %d\n", currentBalance);
    }else if(user == 1){
	printf("Amount to deposit $");
	scanf("%d", &deposit);
	currentBalance = funds + deposit;
	printf("Your balance is $%d\n", currentBalance);
    }else if(user == 2){
	printf("Amount: ");
	scanf("%d", &refund);
	currentBalance = funds - refund;
	printf("Your balance is $%d\n", currentBalance);
    }else
	printf("No valid\n");

    return 0;
}
