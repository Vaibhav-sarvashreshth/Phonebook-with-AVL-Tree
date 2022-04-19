#include "functions.h"
#include<stdio.h>
Tree_Node_Pers *rightRotate_Pers(Tree_Node_Pers *y)
{
	Tree_Node_Pers *x = y->left;
	Tree_Node_Pers *T2 = x->right;

	// Perform rotation
	x->right = y;
	y->left = T2;

	// Update heights
	y->height = height_Pers(y);
	x->height = height_Pers(x);

	// Return new root
	return x;
}

Tree_Node_Pro *rightRotate_Pro(Tree_Node_Pro *y)
{
	Tree_Node_Pro *x = y->left;
	Tree_Node_Pro *T2 = x->right;

	// Perform rotation
	x->right = y;
	y->left = T2;

	// Update heights
	y->height = height_Pro(y);
	x->height = height_Pro(x);

	// Return new root
	return x;
}