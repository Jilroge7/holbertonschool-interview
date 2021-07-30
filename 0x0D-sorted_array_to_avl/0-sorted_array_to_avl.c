#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
* sorted_array_to_avl - function
* @array: pntr to 1st element of array to convert
* @size: number of elemnts in array
* Description: build an AVL tree from an array
* Return: pntr to root node of the new AVL tree or NULL fail
*/
avl_t *sorted_array_to_avl(int *array, size_t size)
{
    avl_t *tree = NULL;

    if (array == NULL)
        return (NULL);

    return (build_avl_tree(tree, array, 0, size - 1));
}

/**
* binary_tree_node - function
* @parent: ptr to parent node of node to creat
* @value: value to put in new node
* Description: create a binary tree node
* Return: New node or NULL on fail
*/
avl_t *binary_tree_node(int value)
{
	avl_t *newNode;

	newNode = malloc(sizeof(avl_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->parent = NULL;
	return (newNode);
}

/**
* build_avl_tree - function
* @tree: pointer to tree
* @array: pointer to first element that builds the tree
* @start: start of array index
* @end: end of array index
* Description: creates an avl tree from sorted array
* Return: pointer to tree root or NULL
*/
avl_t *build_avl_tree(avl_t *tree, int *array, int start, int end)
{
    size_t midpoint = (sizeof(array) / sizeof(int)) / 2;
    avl_t *tempnode;

    if (start > end)
        return (NULL);

    tempnode = binary_tree_node(array[midpoint]);
    if (tempnode == NULL)
        return NULL;

    tempnode->parent = tree;
    tempnode->left = build_avl_tree(tempnode, array, start, midpoint - 1);
    tempnode->right = build_avl_tree(tempnode, array, midpoint + 1, end);

    return (tempnode);
}