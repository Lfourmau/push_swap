#include "../../Includes/push_swap.h"

int	rra(t_stacks *stacks, int print)
{
	if (add_front_slot(&stacks->stack_a, stacks->stack_a.stack[stacks->stack_a.max_index]))
		return (1);
	if (del_back_value(&stacks->stack_a))
		return (1);
	if (print == 1)
		printf("rra\n");
	return (0);
}

int	rrb(t_stacks *stacks, int print)
{
	if (add_front_slot(&stacks->stack_b, stacks->stack_b.stack[stacks->stack_b.max_index]))
		return (1);
	if (del_back_value(&stacks->stack_b))
		return (1);
	if (print == 1)
		printf("rrb\n");
	return (0);
}

int	rrr(t_stacks *stacks, int print)
{
	if (rra(stacks, print) || rrb(stacks, print))
		return (1);
	if (print == 1)
		printf("rrr\n");
	return (0);
}
