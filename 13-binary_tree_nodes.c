#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree 
 * @tree: a pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{

size_t right_nodes, left_nodes;

if (tree == NULL)
return (0);

if (tree->right || tree->left)
{
left_nodes = binary_tree_nodes(tree->left) + 1;
right_nodes = binary_tree_nodes(tree->right) + 1;
return (right_nodes + left_nodes - 1);
}
return (0);
}
