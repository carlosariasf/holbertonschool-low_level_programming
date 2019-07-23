#include "binary_trees.h"
/**
 * binary_tree_insert_right = Create node
 * @parent: Pointer to parent
 * @value: value of node
 * Return: Pointer to new node
**/
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
