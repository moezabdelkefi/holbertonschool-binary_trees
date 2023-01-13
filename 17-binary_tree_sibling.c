#include "binary_trees.h"
/**
 *binary_tree_sibling - a function that finds the sibling of a node
 *@node: is a pointer to the node to find the sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;

	if (!node || !node->parent)
	{
		return (NULL);
	}

	if (parent->left == node)
	{
		return (parent->right);
	}
	else
	{
		return (parent->left);
	}
}
