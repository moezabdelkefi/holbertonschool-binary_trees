#include "binary_trees.h"
/**
 * binary_tree_height -
 */
size_t binary_tree_height(const binary_tree_t *tree)
{

    size_t l = 0, m = 0;
    if (tree == NULL)
    {
        return 0;
    }
    if (tree->right)

        l = 1 + binary_tree_height(tree->right);
    if (tree->left)
        m = binary_tree_height(tree->left);
    if (l > m)
        return (l);
    else
        return (m);
}
