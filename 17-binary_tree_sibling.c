#include "binary_trees.h"
/**
 *binary_tree_sibling - a function that finds the sibling of a node
 *@node: is a pointer to the node to find the sibling
 *Return: right or left
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (!node || !node->parent)
	{
		return (NULL);
	}

	binary_tree_t *sibling = node->parent;
	if (sibling->left == node)
	{
		return (sibling->right);
	}
	else
	{
		return (sibling->left);
	}
}
