#include "binary_trees.h"
/**
 * binary_tree_postorder = Create node
 * @parent: Pointer to parent
 * @value: value of node
 * Return: Pointer to new node
**/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n_leaves = 0;

	if (!tree)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		return (1 + (binary_tree_nodes(tree->left)
			+ binary_tree_nodes(tree->right)));
	n_leaves = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);

	return (n_leaves);
}
