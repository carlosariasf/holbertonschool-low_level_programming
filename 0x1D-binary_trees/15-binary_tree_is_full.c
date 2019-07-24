#include "binary_trees.h"
/**
 * binary_tree_height = Create node
 * @parent: Pointer to parent
 * @value: value of node
 * Return: Pointer to new node
**/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return(0);
	if (tree->left == NULL && tree->right == NULL)
		binary_tree_is_full(tree->left);
		binary_tree_is_full(tree->right);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	binary_tree_is_full(tree->left);
	binary_tree_is_full(tree->right);
	return(1);
}
