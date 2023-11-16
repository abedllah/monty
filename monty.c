#include "monty.h"
#include <stdio.h>

/* Global variable (as allowed) */
stack_t *stack = NULL;

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }

    return 0;
}

