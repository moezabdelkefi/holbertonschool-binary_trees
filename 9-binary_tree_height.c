#include "binary_trees.h"
/**
 * binary_tree_height -
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    int max = 0;

    if (tree != NULL)
    {
        int leftsubtree = binary_tree_height(tree->left);
        int rightsubtree = binary_tree_height(tree->right);
        if (leftsubtree > rightsubtree)
        {
            max = leftsubtree + 1;
            return max;
        }
        else
        {
            max = rightsubtree + 1;
            return max;
        }
    }
    return (max);
}
