#include "monty.h"


/**
 * pop_top - Adds a node to the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @line: Interger representing the line number of of the opcode.
 */
void pop(stack_t **stack, unsigned int line)
{
    if (stack == NULL || *stack == NULL)
        more_err(7, line);

    stack_t *tmp = *stack;
    *stack = (*stack)->next;

    if (*stack != NULL)
        (*stack)->prev = NULL;

    free(tmp);
}