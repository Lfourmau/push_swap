#include "../../Includes/push_swap.h"

void	sa(t_stacks *stacks, int print)
{
	int	tmp;

	if (stacks->stack_a.max_index != 0 && stacks->stack_a.max_index != -1)
	{
		tmp = stacks->stack_a.stack[0];
		stacks->stack_a.stack[0] = stacks->stack_a.stack[1];
		stacks->stack_a.stack[1] = tmp;
	}
	if (print == 1)
		printf("sa\n");
}

void	sb(t_stacks *stacks, int print)
{
	int	tmp;

	if (stacks->stack_b.max_index != 0 && stacks->stack_b.max_index != -1)
	{
		tmp = stacks->stack_b.stack[0];
		stacks->stack_b.stack[0] = stacks->stack_b.stack[1];
		stacks->stack_b.stack[1] = tmp;
	}
	if (print == 1)
		printf("sb\n");
}

void	ss(t_stacks *stacks, int print)
{
	sa(stacks, print);
	sb(stacks, print);
	if (print == 1)
		printf("ss\n");
}
