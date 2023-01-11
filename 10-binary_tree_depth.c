#include "binary_trees.h"
/**
 *binary_tree_depth -a function that measures the depth
 *@tree:is a pointer to the node to measure the depth
 *Return: Depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t Depth = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent)
		Depth = 1 + binary_tree_depth(tree->parent);

	return (Depth);
}
