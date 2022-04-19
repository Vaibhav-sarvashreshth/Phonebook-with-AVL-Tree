#include<stdio.h> 
#include<stdlib.h>  /* Used only for malloc and free */
#include "functions.h"


int main()
{
  printf("\n\t\t\t----------------------------------------------------------------------------\n");
  printf("\t\t\t###########################################################################");
  printf("\n\t\t\t############                                                   ############");
  printf("\n\t\t\t############             Phonebook Records in C                ############");
  printf("\n\t\t\t############                                                   ############");
  printf("\n\t\t\t###########################################################################");
  printf("\n\t\t\t---------------------------------------------------------------------------\n\n");
    
  Tree_Node_Pers *root = NULL;

  Tree_Node_Pers *root_Pers = NULL;
  Tree_Node_Pro *root_Pro = NULL;

  int a=0,op;
  while(a==0)
  {
	
    printf("\nPLease Choose One Of The Following Options - \n\n");
    printf("1) Create Contact and then insert it\n");
    // printf("2) Modify(Edit) The Details\n");
    printf("3) Delete The Contact\n");
    printf("4) Search Contact\n");
    printf("5) Sort Contacts\n");
    printf("6) Display Personal/Professional Contacts\n");
    printf("7) Range Search (Display all mobile numbers between 2 numbers)\n");
    printf("9) To stop the program\n");

    printf("\nEnter the action you would like to implement: ");
    scanf("%d", &op);

    if(op==1)                /* User want to Create Contact*/
	{
		
		int type;
		long long int no;
		printf("\nEnter which type of contact you want to add: ");
		printf("\nEnter 1 for personal and 2 for professional: ");
				
        scanf("%d", &type);
        if(type==1)
        {	
			printf("\n Enter the number  ");
			scanf("%lld",&no);

			    root_Pers = insert_Pers(root_Pers, no);

		}
		 else
		{	

			  printf("\n Enter the number  ");
				scanf("%lld",&no);
			      root_Pro = insert_Pro(root_Pro, no);
		}
		
	}
	// else if(op==2)          /* User want to Modify(Edit) The Details*/
	// {
	// 	long long int no;
	// 	int type;
	// 	printf("\n\tEnter which type of contact you want to add: ");
	// 	printf("\n\tEnter 1 for personal and 2 for professional: ");
	// 	scanf("%d", &type);
	// 	printf("\nEnter the number which details you want to edit: ");
	// 	scanf("%lld",&no);
	// 	if(type==1)
	// 	{
	// 		Edit_Pers(root_Pers,no);
	// 	}
	// 	else
	// 	{
	// 		Edit_Pro(root_Pro,no);
	// 	}
		
    
	// }
	else if(op==3)          /* User want to Delete The Contact*/
	{
		long long int no;
		int type;
		printf("\n\tEnter which type of contact you want to delete: ");
		printf("\n\tEnter 1 for personal and 2 for professional: ");
		scanf("%d", &type);
		printf("\nEnter the number which you want to delete: ");
		scanf("%lld",&no);
		
		if(type==1)
		{
			 root_Pers = deleteNode_Pers(root_Pers, no);
		}
		else
		{
			 root_Pro = deleteNode_Pro(root_Pro, no);
		}

	}
	else if(op==4)         /* User want to Search Contact*/
	{
		int type;
		long long int no;
		printf("\nEnter 1 for personal and 2 for professional: ");
        scanf("%d", &type);
		printf("\n Enter the number  ");
		scanf("%lld",&no);
		
		if(type==1)
		{
			Search_Pers(root_Pers,no);
		}
		else
		{
			Search_Pro(root_Pro,no);
		}
		
	}
	else if(op==5)         /* User want to Sort Contacts*/
	{
		int type,order;
		printf("\n\n You Have choosed option to sort.");
		printf("\nEnter which type of contact you want to sort: ");
		printf("\nEnter 1 for personal and 2 for professional: ");
				
        scanf("%d", &type);
        printf("\nEnter 1 for ascending and 2 for descending: ");
        scanf("%d", &order);
		if(type==1)
        {
			if(order==1)
			{
				In_Order_Pers(root_Pers);
			}
			else
			{
				In_Order_Pers_D(root_Pers);
			}
        	
		}
		else
		{
			if(order==1)
			{
				In_Order_Pro(root_Pro);
			}
			else
			{
				In_Order_Pro_D(root_Pro);
			}
			
		}

		printf("\n-----------------------------------------------------------------------------------------\n");


	}
	else if(op==6)         /* User want to Display Personal/Professional Contacts*/
	{
		int type;
		printf("\n\nYou Want to Display Contact.\n");
		printf("\nEnter 1 for personal and 2 for professional: ");
		scanf("%d", &type);
	
		if(type==1)
        {	
			if(root_Pers==NULL)
			{
				printf("\nThe phonebook is empty for personal contacts.\n");
				printf("\nPlease add some contacts\n");
				printf("\n-----------------------------------------------------------------------------------------\n");
			}
			else
			{
				In_Order_Pers(root_Pers);
			}
			
		}
		else
		{	if(root_Pro==NULL)
			{
				printf("\nThe phonebook is empty for professional contacts.\n");
				printf("\nPlease add some contacts\n");
				printf("\n-----------------------------------------------------------------------------------------\n");
			}
			else
			{
				In_Order_Pro(root_Pro);
			}
		}

		printf("\n-----------------------------------------------------------------------------------------\n");
      
	}

	else if(op==7)         /* User want to see numbers*/
	{
		int type,a=1,b;
		long long int k1,k2;
		printf("\n\tEnter 1 for personal and 2 for professional: ");
		scanf("%d", &type);
		
		if(type==1)
		{
			printf("\n\tEnter 1st number of  personal list ");
			scanf("%lld", &k1);
			printf("\n\tEnter 2nd number of  personal list ");
			scanf("%lld", &k2);
			if(k1>k2)
			{
				printf("\nRange\n: ");
				Print_Pers(root_Pers, k2, k1);

			}
			else if(k1<k2)
			{
				Print_Pers(root_Pers, k1, k2);

			}
			else
			{
				printf("\n\n Both numbers are same\n");
			}
			
		}
		else
		{
			printf("\n\tEnter 1st number of  personal list ");
			scanf("%lld", &k1);
			printf("\n\tEnter 2nd number of  personal list ");
			scanf("%lld", &k2);
			if(k1>k2)
			{
				Print_Pro(root_Pro, k2, k1);

			}
			else if(k1<k2)
			{
				Print_Pro(root_Pro, k1, k2);

			}
			else
			{
				printf("\n\n Both numbers are same\n");
			}

			
		}
		printf("\n-----------------------------------------------------------------------------------------\n");
      
	}
	else if(op==9)         /* User want to Close the program*/
	{
		a=1;
		printf("\n\tThe Program is going to Delete the Created Personal and professional list");
		printf("\n\tThank you for taking service from our PhoneBook");
		printf("\n\n\t Have a nice day indeed !!!");
    	
	}
	else
	{
		printf("\n\t You have not given input from 1 to 9\n");
		printf("\n\t Please give input from 1 to 9 only\n");
		printf("\n-----------------------------------------------------------------------------------------\n");
	}
	printf("\n-----------------------------------------------------------------------------------------\n");

  }


	return 0;
}