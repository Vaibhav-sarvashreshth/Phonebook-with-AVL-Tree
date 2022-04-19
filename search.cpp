#include "functions.h"
#include<stdio.h>

void Search_Pers(Tree_Node_Pers* root,long long int no)
{
	if(root == NULL)
    {
        printf("\n Not Found");
    }
    else if(root->key==no)
    {
        printf("\n Found !");
        printf("\n fisrt name = %s",root->fname);
		printf("\n lastname = %s",root->lname);
		printf("\n email = %s",root->email);
		printf("\n number = %lld",root->key);
		printf("\n------------------------------------------------------------\n");

    }
    else if(root->key>no)
    {
        Search_Pers(root->left,no);
    }
    else
    {
        Search_Pers(root->right,no);
    }
}

void Search_Pro(Tree_Node_Pro* root,long long int no)
{
	if(root == NULL)
    {
        printf("\n Not Found");
    }
    else if(root->key==no)
    {
        printf("\n Found !");
        printf("\n fisrt name = %s",root->fname);
		printf("\n lastname = %s",root->lname);
		printf("\n email = %s",root->email);
		printf("\n number = %lld",root->key);
    	printf("\n office number = %lld",root->off_no);
    	printf("\n address = %s ",root->add);
   		printf("\n institude/office = %s ",root->insti);
		printf("\n------------------------------------------------------------\n");

    }
    else if(root->key>no)
    {
        Search_Pro(root->left,no);
    }
    else
    {
        Search_Pro(root->right,no);
    }
}