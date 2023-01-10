#include "binary_trees.h"
/**
 *binary_tree_inorder - a function that using in-order traversal
 *@tree: is a pointer to the root node
 *@func: is a pointer to a function to call each node
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
