#include "functions.h"
#include<stdio.h>

int height_Pers(Tree_Node_Pers* Root)
{
	int ret_val=0;
	
	if(Root==NULL)
	{
		ret_val=-1;
	}
	else if (Root->left==NULL && Root->right==NULL)
	{
		ret_val=0;
	}
	else
	{
		/* ret_val = 1+ max(Height(Root->left), Height(Root->right)) */
		
		int left_Height = height_Pers(Root->left);
		int right_Height = height_Pers(Root->right);
		
		if(left_Height > right_Height)
		{
			ret_val = 1 + left_Height;
		}
		else
		{
			ret_val = 1 + right_Height;
		}
		
		return ret_val;
	}
}

int height_Pro(Tree_Node_Pro* Root)
{
	int ret_val=0;
	
	if(Root==NULL)
	{
		ret_val=-1;
	}
	else if (Root->left==NULL && Root->right==NULL)
	{
		ret_val=0;
	}
	else
	{
		/* ret_val = 1+ max(Height(Root->left), Height(Root->right)) */
		
		int left_Height = height_Pro(Root->left);
		int right_Height = height_Pro(Root->right);
		
		if(left_Height > right_Height)
		{
			ret_val = 1 + left_Height;
		}
		else
		{
			ret_val = 1 + right_Height;
		}
		
		return ret_val;
	}
}