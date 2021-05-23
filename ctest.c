#define _CRT_SECURE_NO_WARNINGS
#include "tree.h"
#include <stdio.h>




  struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
 };


 /**
  * Note: The returned array must be malloced, assume caller calls free().
  */
int* preorderTraversal(struct TreeNode* root, int* returnSize) 
{
	if (root->left != NULL)
		preorderTraversal(root->left, returnSize);
	printf("%d", root);

	if (root->right != NULL)
		preorderTraversal(root->right, returnSize);

}

int main(void)
{

	return 0;
}