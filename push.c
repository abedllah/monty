#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

void push(stack_t **stack, unsigned int line_number)
{
    /* Check if there is an argument after push */
    if (!stack || !*stack)
    {
        fprintf(stderr, "L%d: usage: push integer\n", line_number);
        exit(EXIT_FAILURE);
    }

    /* Convert the argument to an integer using atoi */
    int value = atoi((*stack)->n);

    /* Create a new node */
    stack_t *new_node = malloc(sizeof(stack_t));
    if (!new_node)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    /* Assign values to the new node */
    new_node->n = value;
    new_node->prev = NULL;
    new_node->next = *stack;

    /* Update the previous of the current top node */
    if (*stack)
        (*stack)->prev = new_node;

    /* Update the stack to point to the new node */
    *stack = new_node;
}
