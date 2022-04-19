#include "functions.h"
#include<stdio.h>

Tree_Node_Pers * minValueNode_Pers(Tree_Node_Pers* node)
{
    Tree_Node_Pers* current = node;
 
    /* loop down to find the leftmost leaf */
    while (current->left != NULL)
        current = current->left;
 
    return current;
}

Tree_Node_Pro * minValueNode_Pro(Tree_Node_Pro* node)
{
    Tree_Node_Pro* current = node;
    
    /* loop down to find the leftmost leaf */
    while (current->left != NULL)
        current = current->left;
 
    return current;
}
