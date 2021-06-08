#include "../../Includes/push_swap.h"

void    sa(t_stacks *stacks)
{
    int tmp;

    if (!(!stacks->stack_a || !stacks->stack_a[1]))
    {
       tmp = stacks->stack_a[stacks->max_index];
       stacks->stack_a[stacks->max_index] = stacks->stack_a[stacks->max_index - 1];
       stacks->stack_a[stacks->max_index - 1] = tmp;
    }
}

void    sb(t_stacks *stacks)
{
    int tmp;

    if (!(!stacks->stack_b || !stacks->stack_b[1]))
    {
       tmp = stacks->stack_b[stacks->max_index];
       stacks->stack_b[stacks->max_index] = stacks->stack_b[stacks->max_index - 1];
       stacks->stack_b[stacks->max_index - 1] = tmp;
    }
}