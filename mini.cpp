#include <stdio.h>
 
int amount=1000, deposit, withdraw;
int choice, pin, k,s;
char transaction ='y';
 
int main()
{
	printf("Enter Secret Pin:");
	scanf("%d",&s);
	while (pin != s)
	{
		printf("ENTER YOUR SECRET PIN NUMBER:");
		scanf("%d", &pin);
		if (pin != s)
		printf("PLEASE ENTER VALID PASSWORD\n");
	}
	do
	{
		printf("***************WELCOME TO ATM SERVICE***************\n");
		printf("1. Check Balance\n");
		printf("2. Withdraw Cash\n");
		printf("3. Deposit Cash\n");
		printf("4. Quit\n");
		printf("**********************************************\n\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("\n YOUR BALANCE IN Rs : %d ", amount);
			break;
		case 2:
			printf("\n ENTER THE AMOUNT TO WITHDRAW : ");
			scanf("%d", &withdraw);
			if(withdraw >(amount - 500))
			{
				printf("\n INSUFFICENT BALANCE");
			}
			else
			{
				amount = amount - withdraw;
				printf("\n\n PLEASE COLLECT CASH");
				printf("\n YOUR CURRENT BALANCE IS  %d", amount);
			}
			break;
		case 3:
			printf("\n ENTER THE AMOUNT TO DEPOSIT :");
			scanf("%d", &deposit);
                        amount = amount + deposit;
			printf("YOUR BALANCE IS  %d", amount);
			break;
		case 4:
			printf("\n THANK U USING ATM");
			break;
		default:
			printf("\n INVALID CHOICE");
		}
		printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");
		fflush(stdin);
		scanf("%c", &transaction);
		if (transaction == 'n'|| transaction == 'N')
                    k = 1;
	} while (!k);
	printf("\n\n THANKS FOR USING OUT ATM SERVICE");
}
