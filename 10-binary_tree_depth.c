#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @node: a pointer to the node to measure the depth
 * Return: If tree is NULL, function must return 0
 */

size_t binary_tree_depth(const binary_tree_t *node)
{
size_t depth;

if (node == NULL)
return (0);

if (node->parent == NULL)
return (0);

depth = binary_tree_depth(node->parent);
depth++;
return (depth);
}
