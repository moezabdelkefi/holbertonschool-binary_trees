#include "binary_trees.h"
/**
 *binary_tree_sibling - a function that finds the sibling of a node
 *@node: is a pointer to the node to find the sibling
 *Return: right or left
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    binary_tree_t *parent = node->parent;
    if (!node || !node->parent)
    {
        return NULL;
    }

    if (parent->left == node)
    {
        if (parent->right)
            return parent->right;
    }
    else
    {
        if (parent->left)
            return parent->left;
    }
    return NULL;
}
