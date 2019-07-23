#include "binary_trees.h"
/**
 * binary_tree_is_lef = Create node
 * @parent: Pointer to parent
 * @value: value of node
 * Return: Pointer to new node
**/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
