#include "binary_trees.h"

/**
 *binary_tree_leaves - counts the leaves in a binary tree
 *@tree: pointer to the root node of the tree to count the number of leaves
 *Return: number of leaves or 0 if tree is null
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);/*Number of nodes in NULL tree is 0*/

	/*If the node has at least one child, return 1 + count of nodes in left and right subtrees*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right));
}
