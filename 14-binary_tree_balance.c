#include "binary_trees.h"

/**
 *binary_tree_balance - measures the balance factor of a binary tree
 *@tree: pointer to the root node of the tree to measure the balance factor
 *Return: balancing factor or 0 if none
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) -
				binary_tree_height(tree->right));
	return (0);
}

/**
 *binary_tree_height - measures the height of a binary tree
 *@tree: pointer to the root node of the tree to measure the height
 *Return: height of tree or 0 otherwise
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	if (!tree)
		return (0);

	height_left = (tree->left) ? 1 + binary_tree_height(tree->left) : 0;
	height_right = (tree->right) ? 1 + binary_tree_height(tree->right) : 0;

	return (height_left > height_right ? height_left : height_right);
}
