#include "../../Includes/push_swap.h"

int	malloc_stacks(t_stacks *stacks, int start, int argc)
{
	if (start == 1)
	{
		stacks->stack_a.stack = malloc(argc - 1);
		stacks->stack_b.stack = malloc(argc - 1);
		if (stacks->stack_a.stack == NULL || stacks->stack_b.stack == NULL)
			return (1);
	}
	else if (start == 0)
	{
		stacks->stack_a.stack = malloc(argc);
		stacks->stack_b.stack = malloc(argc);
		if (stacks->stack_a.stack == NULL || stacks->stack_b.stack == NULL)
			return (1);
	}
	return (0);
}
