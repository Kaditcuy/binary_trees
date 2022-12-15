#include "binary_trees.h"

/**
* binary_tree_is_leaf - Checks if a node is a tree
* @node: Pointer to the node to check
*
* Return: 1 if node is a leaf and 0 otherwise even if node is Null
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node && (node->left || node->right))
		return (0);
	else
		return(1);
}
