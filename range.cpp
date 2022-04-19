#include "functions.h"
#include<stdio.h>

void Print_Pers(Tree_Node_Pers *root, long long int k1, long long int k2)
{
   /* base case */
   if ( NULL == root )
   {
   		return;
   }
 
   /* Since the desired o/p is sorted, recurse for left subtree first
      If root->data is greater than k1, then only we can get o/p keys
      in left subtree */
   if ( k1 < root->key )
     Print_Pers(root->left, k1, k2);
 
   /* if root's data lies in range, then Print_Perss root's data */
   if ( k1 <= root->key && k2 >= root->key )
     printf("%d ", root->key );
 
  /* recursively call the right subtree */
   Print_Pers(root->right, k1, k2);
}

void Print_Pro(Tree_Node_Pro *root, long long int k1, long long int k2)
{
   /* base case */
   if ( NULL == root )
   {
   		return;
   }
 
   /* Since the desired o/p is sorted, recurse for left subtree first
      If root->data is greater than k1, then only we can get o/p keys
      in left subtree */
   if ( k1 < root->key )
     Print_Pro(root->left, k1, k2);
 
   /* if root's data lies in range, then prints root's data */
   if ( k1 <= root->key && k2 >= root->key )
     printf("\n %d ", root->key );
 
  /* recursively call the right subtree */
   Print_Pro(root->right, k1, k2);
}