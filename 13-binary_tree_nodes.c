#include "binary_trees.h"
/**
 *binary_tree_nodes -  a function that counts the nodes with at least 1 child
 *@tree:is a pointer to the root node of the tree
 *Return: the number of the node that have at least one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL || tree->right != NULL)
	{
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
	}
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
