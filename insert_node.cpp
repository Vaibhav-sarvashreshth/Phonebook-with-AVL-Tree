#include "functions.h"
#include<stdio.h>
/* Insertion in BTS*/

/* here we assumed that we already created a leaf node with n->data = e and n->left= n->right=null*/

Tree_Node_Pers* insert_Pers(Tree_Node_Pers* node, long long int key)
{
	/* 1. Perform the normal BST insertion */
	if (node == NULL)
		return(newNode_Pers(key));

	if (key < node->key)
		node->left = insert_Pers(node->left, key);
	else if (key > node->key)
		node->right = insert_Pers(node->right, key);
	else // Equal keys are not allowed in BST
		return node;

	/* 2. Update height of this ancestor node */
	node->height = height_Pers(node);

	/* 3. Get the balance factor of this ancestor
		node to check whether this node became
		unbalanced */
	int balance = getBalance_Pers(node);

	// If this node becomes unbalanced, then
	// there are 4 cases

	// Left Left Case
	if (balance > 1 && key < node->left->key)
		return rightRotate_Pers(node);

	// Right Right Case
	if (balance < -1 && key > node->right->key)
		return leftRotate_Pers(node);

	// Left Right Case
	if (balance > 1 && key > node->left->key)
	{
		node->left = leftRotate_Pers(node->left);
		return rightRotate_Pers(node);
	}

	// Right Left Case
	if (balance < -1 && key < node->right->key)
	{
		node->right = rightRotate_Pers(node->right);
		return leftRotate_Pers(node);
	}

	/* return the (unchanged) node pointer */
	return node;
}

Tree_Node_Pro* insert_Pro(Tree_Node_Pro* node, long long int key)
{
	/* 1. Perform the normal BST insertion */
	if (node == NULL)
		return(newNode_Pro(key));

	if (key < node->key)
		node->left = insert_Pro(node->left, key);
	else if (key > node->key)
		node->right = insert_Pro(node->right, key);
	else // Equal keys are not allowed in BST
		return node;

	/* 2. Update height of this ancestor node */
	node->height = height_Pro(node);

	/* 3. Get the balance factor of this ancestor
		node to check whether this node became
		unbalanced */
	int balance = getBalance_Pro(node);

	// If this node becomes unbalanced, then
	// there are 4 cases

	// Left Left Case
	if (balance > 1 && key < node->left->key)
		return rightRotate_Pro(node);

	// Right Right Case
	if (balance < -1 && key > node->right->key)
		return leftRotate_Pro(node);

	// Left Right Case
	if (balance > 1 && key > node->left->key)
	{
		node->left = leftRotate_Pro(node->left);
		return rightRotate_Pro(node);
	}

	// Right Left Case
	if (balance < -1 && key < node->right->key)
	{
		node->right = rightRotate_Pro(node->right);
		return leftRotate_Pro(node);
	}

	/* return the (unchanged) node pointer */
	return node;
}