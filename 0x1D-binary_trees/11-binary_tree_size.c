#include "binary_trees.h"
/**
 * binary_tree_postorder = Create node
 * @parent: Pointer to parent
 * @value: value of node
 * Return: Pointer to new node
**/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t r = 1;
	if (!tree)
		return (0);
	r += binary_tree_size(tree->left) + binary_tree_size(tree->right);
	return (r);
}
