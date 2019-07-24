#include "binary_trees.h"
/**
 * binary_tree_postorder = Create node
 * @parent: Pointer to parent
 * @value: value of node
 * Return: Pointer to new node
**/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t n_leaves = 0;

	if (!tree)
		return (0);
	if (tree->parent != NULL && tree->left == NULL && tree->right == NULL)
		return (1 + (binary_tree_leaves(tree->left)
			+ binary_tree_leaves(tree->right)));
	n_leaves = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);

	return (n_leaves);
}
