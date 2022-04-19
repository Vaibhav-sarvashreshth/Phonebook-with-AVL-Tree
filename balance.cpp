#include "functions.h"
#include<stdio.h>

// function to calculatr balance factor

int getBalance_Pers(Tree_Node_Pers* N)
{	
	int ret_val=0;
	if (N == NULL)
	{
		ret_val = 0;
	}
	else
	{
		ret_val= height_Pers(N->left) - height_Pers(N->right);
	}
	return ret_val;
}

int getBalance_Pro(Tree_Node_Pro* N)
{	
	int ret_val=0;
	if (N == NULL)
	{
		ret_val = 0;
	}
	else
	{
		ret_val= height_Pro(N->left) - height_Pro(N->right);
	}
	return ret_val;
}