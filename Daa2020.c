#include<stdio.h>
#include<stdlib.h>

int main()
{
	int item_code;
	int account_no;
	float amount1,amount2,amount3,amount4,sum, discount,total;
	int confirmation;
	int chk_out;
	int l_no;
	int sevice_no = account_no / 10000000;
	string sp;
	int loyal_chk = l_no / 1000;

	do {
		printf("item code\tName\n");
		printf("1\tDialog reload\n");
		printf("3\tMobitel reload\n");
		printf("4\tAirtel reload\n");
		printf("5\tHutch reload\n"); 	
	}
	
	printf("\nEnter the item code:");
	scanf("%d",&item_code);

	if ( (item_code==1) || (item_code==3) || (item_code==4) || (item_code==5) )
	{
		if (item_code==1)
		{
			sp = "dialog";
			printf(+sp "Reload");

			printf("\nEnter the Account number:");
			scanf("%d",&account_no);
			
			if ( (strlen(account_no) ==10) && (service_no ==74) || (service_no ==76) || (service_no ==77) )
			{
				sp = "Dialog";
				printf(+sp +account_no);
				printf("\nPlease enter the amount")
				scanf(%d" ,amount1);
				if (amount >= 50)
				{
					printf(+sp, +account_no, +amount1);
				}
			}
		}
		if (item_code==3)
		{
			sp = "mobitel";
			printf(+sp, "Reload");

			printf("\nEnter the Account number:");
			scanf("%d",&account_no);
			
			if ( (strlen(account_no) ==10) && (service_no ==70) || (service_no ==71))
			{
				printf(sp +account_no);
				printf("\nPlease enter the amount")
				scanf(%d" ,amount2);
				if (amount >= 50)
				{
					printf(+sp, +account_no, +amount2);
				}
			}
		}
		if (item_code==4)
		{
			sp = "Hutch";
			printf(+sp ,"Reload");

			printf("\nEnter the Account number:");
			scanf("%d",&account_no);
			
			if ( (strlen(account_no) ==10) && (service_no ==72) || (service_no ==78) )
			{
				printf(+sp +account_no);
				printf("\nPlease enter the amount")
				scanf(%d" ,amount3);
				if (amount >= 50)
				{
					printf(+sp, +account_no, +amount3);
				}
			}
		}
		if (item_code==5)
		{
			sp = "Airtel";
			printf(+sp ,"Reload");

			printf("\nEnter the Account number:");
			scanf("%d",&account_no);
			
			if ( (strlen(account_no) ==10) && (service_no ==75) )
			{
				printf(+sp, +account_no);
				printf("\nPlease enter the amount")
				scanf(%d" ,amount4);
				if (amount >= 50)
				{
					printf(+sp, +account_no, +amount4);
				}
			}
		}
	}

	sum = amount1 + amount2 + amount 3 + amount 4;

	
	 printf("\nPlease Enter 1 to Confirm and 2 to Cancel:");
         scanf("%d",&confirmation);
		if(confirmation==1)
		{
			printf("Confirmed");
            
		}
        
		else if(confirmation==2)
		{
			printf("Cancelled");
            exit(0);
		}

        printf("\nPlease Enter 0 to continue or any other number to add more items:\n");
        scanf("%d",&chk_out);
	
	} while (confirmation != 0)

	if (chk_out == 0)
	{
		printf(+sp ,+amount1 ,+amount2, +amount3, +amount4, sum);
	}

	printf("\nLoyalty Number:");
	scanf("%d",&l_no);

	if (strlen(l_no) ==4) && (sum > 500.00) )
	{
		if ( (loyal_chk ==1) ||  (loyal_chk ==2) ||  (loyal_chk ==3) ||  (loyal_chk ==4) ||  (loyal_chk ==5) )
		{
			discount = tot * 2 /100;
			total = tot + discount;
		} else
			{
				discount = tot * 3 /100;
				total = tot + discount;
				printf(+sp, +account_no, +tot1, +tot2, +tot3, +tot4, +discount, +total);
		        }

	} else 
		{
			printf("incorrect loyalty number");
			printf(+sp, +account_no, +tot1, +tot2, +tot3, +tot4, +discount, +total);
		}
}