#include "binary_trees.h"

/**
 *binary_tree_preorder - go through a binary tree using pre-order traversal
 *@tree: pointer to the root node of the tree to traverse
 *@func: pointer to a function to call for each node
 *Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;  /* Do nothing for NULL tree or function*/
	/*call func to the current node*/
	func(tree->n);
	/*Recursively traverse the left and right subtrees in pre-order*/
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);

}
