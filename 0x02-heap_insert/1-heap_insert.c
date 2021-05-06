#include "binary_trees.h"
/**
 * heap_insert - function
 * @root: double ptr to root of heap
 * @value: value of new node to insert
 * Description: insert new node into heap using max heap ordering
 * Return: ptr to inserted node or NULL if fail
 */
heap_t *heap_insert(heap_t **root, int value)
{
    heap_t *temp_node;

    if (root == NULL)
        return (NULL);
     temp_node = binary_tree_node(root, value);
    if (temp_node == NULL)
        return (NULL);

    return (temp_node);
    
}