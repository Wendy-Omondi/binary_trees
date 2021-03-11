#include "binary_trees.h"

/**
 *binary_tree_height - measures height of a binary tree
 *@tree: a pointer to the root node of the tree to measure the height.
 *Return: If tree is NULL,function must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_h;
size_t right_h;

if (tree == NULL)
return (0);

if (!(tree->left) && !(tree->right))
return (0);

left_h = binary_tree_height(tree->left);
left_h++;
right_h = binary_tree_height(tree->right);
right_h++;

if (left_ > right_h)
return (left_h);

else
return (right_h);
}
