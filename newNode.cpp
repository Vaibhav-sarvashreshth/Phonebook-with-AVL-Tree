#include "functions.h"
#include<stdio.h>
#include<stdlib.h>  /* Used only for malloc and free */
#include<stdlib.h>  /* Used only for malloc and free */

Tree_Node_Pers* newNode_Pers(long long int key)
{
	Tree_Node_Pers *node = ( Tree_Node_Pers*)malloc(sizeof(Tree_Node_Pers));
	
	node->key = key;
	node->left = NULL;
	node->right = NULL;
	node->height = 0; // new node is initially added at leaf

	printf("\n-----------------------------------------------------------------------------------------\n");
	printf("\n\t Creating Personal Contacts ");
	printf("\n\t Enter First Name :");
	scanf("%s", &node->fname);
	printf("\n\t Enter last Name :");
	scanf("%s", &node->lname);
	printf("\n\t Enter Email Name :");
	scanf("%s", &node->email);
	// printf("\n\t Enter Mobile Number ");
	// scanf("%lld", &node->key);

	return(node);
}


Tree_Node_Pro* newNode_Pro(long long int key)
{
	Tree_Node_Pro *node = ( Tree_Node_Pro*)malloc(sizeof(Tree_Node_Pro));
	
	node->key = key;
	node->left = NULL;
	node->right = NULL;
	node->height = 0; // new node is initially added at leaf

	char c;
    printf("\n-----------------------------------------------------------------------------------------\n");
	printf("\n\t Creating Personal Contacts ");
	printf("\n\t Enter First Name :");
	scanf("%s", &node->fname);
	printf("\n\t Enter last Name :");
	scanf("%s", &node->lname);
	printf("\n\t Enter Email Name :");
	scanf("%s", &node->email);
	// printf("\n\t Enter Mobile Number ");
	// scanf("%lld", &node->key);
    printf("\n\t Enter Office Number :");
	scanf("%lld", &node->off_no);
    printf("\n\t Enter office Address :");

	scanf("%c",&c); // read string
	scanf("%[^\n]s",&node->add); // read string
	printf("\n\t Enter Institude/office Name :");
	scanf("%s", &node->insti);


	return(node);
}