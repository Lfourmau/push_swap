#include "../../Includes/push_swap.h"

int	ra(t_stacks *stacks, int print)
{
	if (add_back_slot(&stacks->stack_a, stacks->stack_a.stack[0]))
		return (1);
	if (del_front_value(&stacks->stack_a))
		return (1);
	if (print == 1)
		printf("ra\n");
	return (0);
}

int	rb(t_stacks *stacks, int print)
{
	if (add_back_slot(&stacks->stack_b, stacks->stack_b.stack[0]))
		return (1);
	if (del_front_value(&stacks->stack_b))
		return (1);
	if (print == 1)
		printf("rb\n");
	return (0);
}

int	rr(t_stacks *stacks, int print)
{
	if (ra(stacks, print))
		return (1);
	if (rb(stacks, print))
		return (1);
	if (print == 1)
		printf("rr\n");
	return (0);
}
