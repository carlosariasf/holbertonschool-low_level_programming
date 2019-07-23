#include "binary_trees.h"
/**
 * binary_tree_postorder = Create node
 * @parent: Pointer to parent
 * @value: value of node
 * Return: Pointer to new node
**/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
