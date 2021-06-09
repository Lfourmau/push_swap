#include "../../Includes/push_swap.h"

void	stack_a_to_b(t_stacks *stacks)
{
	int i;

	i = 0;
	while (i <= stacks->stack_a.max_index)
	{
		stacks->stack_b.stack[i] = stacks->stack_a.stack[i];
		i++;
	}
	stacks->stack_b.max_index = stacks->stack_a.max_index;
}

void	stack_b_to_a(t_stacks *stacks)
{
	int i;

	i = 0;
	while (i <= stacks->stack_b.max_index)
	{
		stacks->stack_a.stack[i] = stacks->stack_b.stack[i];
		i++;
	}
	stacks->stack_a.max_index = stacks->stack_b.max_index;
}