#include "functions.h"
#include<stdio.h>

Tree_Node_Pers* Create_Contact_Pers(Tree_Node_Pers* node)
{	char c;
		
    printf("\n-----------------------------------------------------------------------------------------\n");
	printf("\n\t Creating Personal Contacts ");
	printf("\n\t Enter First Name ");
	scanf("%s", &node->fname);
	scanf("%c",&c); // read string
	printf("\n\t Enter last Name ");
	scanf("%s", &node->lname);
	printf("\n\t Enter Email Name ");
	scanf("%s", &node->email);
	printf("\n\t Enter Mobile Number ");
	scanf("%lld", &node->key);
	
	
    node->left = NULL;
	node->right = NULL;
	node->height = 0; // new node is initially added at leaf

	printf("\n fname = %s",node->fname);
	printf("\n lname = %s",node->lname);
	printf("\n email = %s",node->email);
	printf("\n number = %lld",node->key);

	node = insert_Pers(node, node->key);
    return node;
}

Tree_Node_Pro* Create_Contact_Pro(Tree_Node_Pro* node)
{
    char c;
    printf("\n-----------------------------------------------------------------------------------------\n");
	printf("\n\t Creating Personal Contacts ");
	printf("\n\t Enter First Name ");
	scanf("%s", &node->fname);
	printf("\n\t Enter last Name ");
	scanf("%s", &node->lname);
	printf("\n\t Enter Email Name ");
	scanf("%s", &node->email);
	printf("\n\t Enter Mobile Number ");
	scanf("%lld", &node->key);
    printf("\n\t Enter Office Number ");
	scanf("%lld", &node->off_no);
    printf("\n\t Enter office Address ");
	printf("-");
	scanf("%c",&c); // read string
	scanf("%[^\n]s",&node->add); // read string
	printf("\n\t Enter Institude/office Name ");
	scanf("%s", &node->insti);

    node->left = NULL;
	node->right = NULL;
	node->height = 0; // new node is initially added at leaf

	printf("\n fname = %s",node->fname);
	printf("\n lname = %s",node->lname);
	printf("\n email = %s",node->email);
	printf("\n number = %lld",node->key);
    printf("\n office number = %lld",node->off_no);
    printf("\n address = %s ",node->add);
    printf("\n institude/office = %s ",node->insti);

    return node;
}