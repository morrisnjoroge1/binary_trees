#include "binary_trees.h"

/**
 *binary_tree_is_full - checks if a binary tree is full
 *@tree: a pointer to the root node of the tree to check
 *Return: full tree or 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);/*NULL tree is not full*/

	/*If the node is a leaf, it's full by definition*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/*If the node has both children, recursively check left and right subtrees*/
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));
	return (0);/*If the node has only one child, the tree is not full*/
}
