#include "../../Includes/push_swap.h"

void    sa(t_stacks *stacks)
{
    int tmp;

    if (!(!stacks->stack_a.stack || !stacks->stack_a.stack[1]))
    {
       tmp = stacks->stack_a.stack[stacks->stack_a.max_index];
       stacks->stack_a.stack[stacks->stack_a.max_index] = stacks->stack_a.stack[stacks->stack_a.max_index - 1];
       stacks->stack_a.stack[stacks->stack_a.max_index - 1] = tmp;
    }
}

void    sb(t_stacks *stacks)
{
    int tmp;

    if (!(!stacks->stack_b.stack || !stacks->stack_b.stack[1]))
    {
       tmp = stacks->stack_b.stack[stacks->stack_b.max_index];
       stacks->stack_b.stack[stacks->stack_b.max_index] = stacks->stack_b.stack[stacks->stack_b.max_index - 1];
       stacks->stack_b.stack[stacks->stack_b.max_index - 1] = tmp;
    }
}