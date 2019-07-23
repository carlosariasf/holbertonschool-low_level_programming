#include "binary_trees.h"
/**
 * binary_tree_postorder = Create node
 * @parent: Pointer to parent
 * @value: value of node
 * Return: Pointer to new node
**/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *tmp = node;

	if (!node)
		return (0);
	if (!node->parent)
		return (0);
	tmp = node->parent;
	if (tmp->left->n == node->n)
		return (tmp->right);
	return (tmp->left);
}
