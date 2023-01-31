/*Replication of ATM Machine*/
#include<stdio.h>
using namespace std;
main() {
	printf("|||WELCOME|||\n");
	int pin;
	pin = 2005;
	int enter_pin;
	printf("Enter your 4-digit secret pin : \n");
	scanf("%d",&enter_pin);
	int bal,min_bal;
	bal = 50000;
	min_bal = 5000;
	if (enter_pin == pin) {
		printf("Account Balance : %d \n",bal);
		printf("Services we provide \n");
		printf("1.Withdraw Money \n");
		printf("2.Deposit Money \n");
		printf("3.Balance Enquiry \n");
		printf("4.Fund Transfer \n");
		int n;
		printf("Choose any service \n");
		scanf("%d",&n);
		
		if(n==1){
			printf("||||||||WITHDRAW MONEY|||||||| \n");
			int wit,wit_bal;
			printf("Enter amount: \n");
			scanf("%d",&wit);
			wit_bal = bal - wit;
			if(wit_bal < min_bal) {
				printf("Money can't be withdrawn due to exceeding of minimum limit of account.");
			}
			else { 
			printf("Balance after Transaction is %d",wit_bal);
			}
		}
		else if(n == 2) {
			printf("||||||||DEPOSIT MONEY||||||||\n");
			int dep,dep_bal;
			printf("Enter amount: \n");
			scanf("%d",&dep);
			dep_bal=bal+dep;
			printf("Balance after Transaction is %d",dep_bal);	
		}
		else if(n == 3) {
			printf("||||||||BALANCE ENQUIRY||||||||");
			printf("Balance in Account is %d",bal);
		}
		else if (n == 4){
			printf("||||||||FUND TRANSFER||||||||\n");
			int acc_no,fund,fund_bal;
			printf("Enter Payee's Account Number: \n");
			scanf("%d",&acc_no);
			printf("Enter amount: \n");
			scanf("%d",&fund);
			fund_bal = bal - fund;
			if(fund_bal < min_bal) {
				printf("Amount can't be transferred due to exceeding of minimum limit of account balance \n");
			}
			else { 
			printf("Balance after the transaction is %d \n",fund_bal);
			}
		}
		else{
			printf("Please select a valid option \n");
		}
	}
	else {
		printf("Please check again and enter the correct pin");
	}
	printf("Thank you \n");
	printf("Visit again!!");
}
