
#include "binary_trees.h"

/**
 * binary_tree_is_leaf -  a function that checks if a node is a leaf.
 *@node: is a pointer to the node to check.
 * Return: return 1 if node is a leaf, otherwise 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		leaves += (!tree->left && !tree->right) ? 1 : 0;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
