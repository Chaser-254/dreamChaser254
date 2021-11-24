#include <stdio.h>
int main()
{
	printf("\n Welcome to Fuliza M-Pesa.");
	
	int option1,phone_number,Amount,pin;
	printf("\n 1.Send Money:");
	printf("\n 2.Buy Goods:");
	printf("\n 3.Pay Bills:");
	printf("\n 4.Buy Bundles Via M-Pesa:");
	printf("\n 5.Buy Airtime:");
	printf("\n **********************");
	
	printf("\n please Enter your option:");
	scanf("%d", &option1);
	
	if (option1 == 1)
	{
		printf("Please Enter Amount in Ksh. \n");
		scanf("%d",&Amount);
		printf("Please Enter phone_number: \n");
		scanf("%d", &phone_number);
		printf("Please Enter your pin:");
		scanf("%d", &pin);
		printf("Confirmed You have send Ksh %d to %d",Amount,phone_number );
	}
	else
	{
		printf("You have entered incorrect number!");
	}
}