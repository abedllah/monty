#include "monty.h"

/**
 * add_to_stack - Adds a node to the stack.
 * @new_node: Pointer to the new node.
 * @ln: Interger representing the line number of of the opcode.
 */
void add_to_stack(stack_t **new_node, __attribute__((unused)) unsigned int ln)
{
    if (!new_node || !*new_node)
    {
        exit(EXIT_FAILURE);
    }
    if (!head)
    {
        head = *new_node;
    }
    else
    {
        (*new_node)->next = head;
        head->prev = *new_node;
        head = *new_node;
    }
}