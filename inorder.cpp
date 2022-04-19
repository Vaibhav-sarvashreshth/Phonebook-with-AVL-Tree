#include "functions.h"
#include<stdio.h>

void In_Order_Pers(Tree_Node_Pers *root)
{
	if(root != NULL)
	{
		In_Order_Pers(root->left);
		printf("\n fist name = %s",root->fname);
		printf("\n last name = %s",root->lname);
		printf("\n email = %s",root->email);
		printf("\n number = %lld",root->key);
		printf("\n------------------------------------------------------------\n");
		In_Order_Pers(root->right);
	}
}

void In_Order_Pro(Tree_Node_Pro *root)
{
	if(root != NULL)
	{
		In_Order_Pro(root->left);
		printf("\n fisrt name = %s",root->fname);
		printf("\n lastname = %s",root->lname);
		printf("\n email = %s",root->email);
		printf("\n number = %lld",root->key);
    	printf("\n office number = %lld",root->off_no);
    	printf("\n address = %s ",root->add);
   		printf("\n institude/office = %s ",root->insti);
		printf("\n------------------------------------------------------------\n");
		In_Order_Pro(root->right);
	}
}

void In_Order_Pers_D(Tree_Node_Pers *root)
{
	if(root != NULL)
	{
        In_Order_Pers(root->right);
		printf("\n fist name = %s",root->fname);
		printf("\n last name = %s",root->lname);
		printf("\n email = %s",root->email);
		printf("\n number = %lld",root->key);
		printf("\n------------------------------------------------------------\n");
		In_Order_Pers(root->left);
	}
}

void In_Order_Pro_D(Tree_Node_Pro *root)
{
	if(root != NULL)
	{
		In_Order_Pro(root->right);
		printf("\n fisrt name = %s",root->fname);
		printf("\n lastname = %s",root->lname);
		printf("\n email = %s",root->email);
		printf("\n number = %lld",root->key);
    	printf("\n office number = %lld",root->off_no);
    	printf("\n address = %s ",root->add);
   		printf("\n institude/office = %s ",root->insti);
		printf("\n------------------------------------------------------------\n");
		In_Order_Pro(root->left);
	}
}