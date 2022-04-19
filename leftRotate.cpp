#include "functions.h"
#include<stdio.h>

Tree_Node_Pers *leftRotate_Pers(Tree_Node_Pers *x)
{
	Tree_Node_Pers *y = x->right;
	Tree_Node_Pers *T2 = y->left;

	// Perform rotation
	y->left = x;
	x->right = T2;

	// Update heights
	x->height = height_Pers(x);
	y->height = height_Pers(y);

	// Return new root
	return y;
}

Tree_Node_Pro *leftRotate_Pro(Tree_Node_Pro *x)
{
	Tree_Node_Pro *y = x->right;
	Tree_Node_Pro *T2 = y->left;

	// Perform rotation
	y->left = x;
	x->right = T2;

	// Update heights
	x->height = height_Pro(x);
	y->height = height_Pro(y);

	// Return new root
	return y;
}