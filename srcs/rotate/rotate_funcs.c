#include "../../Includes/push_swap.h"

int ra(t_stacks *stacks)
{
    if (add_back_slot(&stacks->stack_a, stacks->stack_a.stack[0]))
        return (1);
    if (del_front_value(&stacks->stack_a))
        return (1);
    return (0);
}

int rb(t_stacks *stacks)
{
    if (add_back_slot(&stacks->stack_b, stacks->stack_b.stack[0]))
        return (1);
    if (del_front_value(&stacks->stack_b))
        return (1);
    return (0);
}

int rr(t_stacks *stacks)
{
	if (ra(stacks))
		return (1);
	if (rb(stacks))
		return (1);
	return (0);
}