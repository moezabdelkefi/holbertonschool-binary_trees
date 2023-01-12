#include "binary_trees.h"
/**
 * binary_tree_height - a function that measures the height
 * @tree:  is a pointer to the root node of the tree to measure the height
 * Return: l or m
 */
size_t binary_tree_height(const binary_tree_t *tree)
{

	size_t left = 0, right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->right)

		right = 1 + binary_tree_height(tree->right);
	if (tree->left)
		left = binary_tree_height(tree->left);
	if (right > left)
		return (right);
	else
		return (left);
}
