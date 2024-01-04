#include "binary_trees.h"

/**
 *binary_tree_size - measures the size of a binary tree
 *@tree: pointer to the root node of the tree to measure the size
 *Return: size of binary tree or 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size, right_size;

	if (tree == NULL)
		return (0);

	/*Recursively calculate the size of the left and right subtrees*/
	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	/*The size of the tree is the sum of sizes of left and right subtrees*/
       /*plus 1 for the current node*/
	return (1 + left_size + right_size);
}

