#include "binary_trees.h"
/**
 *binary_tree_preorder - a function that using pre-order
 *@tree: is a pointer to the root node
 *@func: is a pointer to a function to call each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
