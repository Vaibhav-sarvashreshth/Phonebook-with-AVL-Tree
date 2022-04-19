#include "functions.h"
#include<stdio.h>
#include<stdlib.h>
Tree_Node_Pers* deleteNode_Pers(Tree_Node_Pers* root, long long  int key)
{
	// STEP 1: PERFORM STANDARD BST DELETE

	if (root == NULL)
	{
		return root;
	}

	// If the key to be deleted is smaller than the
	// root's key, then it lies in left subtree
	if ( key < root->key )
		root->left = deleteNode_Pers(root->left, key);

	// If the key to be deleted is greater than the
	// root's key, then it lies in right subtree
	else if( key > root->key )
		root->right = deleteNode_Pers(root->right, key);

	// if key is same as root's key, then This is
	// the node to be deleted
	else
	{
		// node with only one child or no child
		if( (root->left == NULL) || (root->right == NULL) )
		{
			Tree_Node_Pers *temp = root->left ? root->left :
											root->right;

			// No child case
			if (temp == NULL)
			{
				temp = root;
				root = NULL;
			}
			else // One child case
			*root = *temp; // Copy the contents of
							// the non-empty child
			printf("\nDeleted !\n");
			
			free(temp);
		}
		else
		{
			// node with two children: Get the inorder
			// successor (smallest in the right subtree)
			Tree_Node_Pers* temp = minValueNode_Pers(root->right);

			// Copy the inorder successor's data to this node
			root->key = temp->key;

			// Delete the inorder successor
			root->right = deleteNode_Pers(root->right, temp->key);
		}
	}

	// If the tree had only one node then return
	if (root == NULL)
	return root;

	// STEP 2: UPDATE HEIGHT OF THE CURRENT NODE
	root->height = 1 + max(height_Pers(root->left),
						height_Pers(root->right));

	// STEP 3: GET THE BALANCE FACTOR OF THIS NODE (to
	// check whether this node became unbalanced)
	int balance = getBalance_Pers(root);

	// If this node becomes unbalanced, then there are 4 cases

	// Left Left Case
	if (balance > 1 && getBalance_Pers(root->left) >= 0)
		return rightRotate_Pers(root);

	// Left Right Case
	if (balance > 1 && getBalance_Pers(root->left) < 0)
	{
		root->left = leftRotate_Pers(root->left);
		return rightRotate_Pers(root);
	}

	// Right Right Case
	if (balance < -1 && getBalance_Pers(root->right) <= 0)
		return leftRotate_Pers(root);

	// Right Left Case
	if (balance < -1 && getBalance_Pers(root->right) > 0)
	{
		root->right = rightRotate_Pers(root->right);
		return leftRotate_Pers(root);
	}

	return root;
}

Tree_Node_Pro* deleteNode_Pro(Tree_Node_Pro* root, long long  int key)
{
	// STEP 1: PERFORM STANDARD BST DELETE

	if (root == NULL)
		return root;

	// If the key to be deleted is smaller than the
	// root's key, then it lies in left subtree
	if ( key < root->key )
		root->left = deleteNode_Pro(root->left, key);

	// If the key to be deleted is greater than the
	// root's key, then it lies in right subtree
	else if( key > root->key )
		root->right = deleteNode_Pro(root->right, key);

	// if key is same as root's key, then This is
	// the node to be deleted
	else
	{
		// node with only one child or no child
		if( (root->left == NULL) || (root->right == NULL) )
		{
			Tree_Node_Pro *temp = root->left ? root->left :
											root->right;

			// No child case
			if (temp == NULL)
			{
				temp = root;
				root = NULL;
			}
			else // One child case
			*root = *temp; // Copy the contents of
							// the non-empty child
			free(temp);
		}
		else
		{
			// node with two children: Get the inorder
			// successor (smallest in the right subtree)
			Tree_Node_Pro* temp = minValueNode_Pro(root->right);

			// Copy the inorder successor's data to this node
			root->key = temp->key;

			// Delete the inorder successor
			root->right = deleteNode_Pro(root->right, temp->key);
		}
	}

	// If the tree had only one node then return
	if (root == NULL)
	return root;

	// STEP 2: UPDATE HEIGHT OF THE CURRENT NODE
	root->height = 1 + max(height_Pro(root->left),
						height_Pro(root->right));

	// STEP 3: GET THE BALANCE FACTOR OF THIS NODE (to
	// check whether this node became unbalanced)
	int balance = getBalance_Pro(root);

	// If this node becomes unbalanced, then there are 4 cases

	// Left Left Case
	if (balance > 1 && getBalance_Pro(root->left) >= 0)
		return rightRotate_Pro(root);

	// Left Right Case
	if (balance > 1 && getBalance_Pro(root->left) < 0)
	{
		root->left = leftRotate_Pro(root->left);
		return rightRotate_Pro(root);
	}

	// Right Right Case
	if (balance < -1 && getBalance_Pro(root->right) <= 0)
		return leftRotate_Pro(root);

	// Right Left Case
	if (balance < -1 && getBalance_Pro(root->right) > 0)
	{
		root->right = rightRotate_Pro(root->right);
		return leftRotate_Pro(root);
	}

	return root;
}