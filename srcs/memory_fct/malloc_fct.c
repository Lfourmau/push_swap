#include "../../Includes/push_swap.h"

int	malloc_stacks(t_stacks *stacks, int start, int argc)
{
	if (start == 1)
	{
		stacks->stack_a.stack = malloc((argc - 1) * sizeof(int));
		stacks->stack_b.stack = malloc((argc - 1) * sizeof(int));
		if (stacks->stack_a.stack == NULL || stacks->stack_b.stack == NULL)
			return (1);
		stacks->stack_a.max_index = -1;
		stacks->stack_b.max_index = -1;
	}
	else if (start == 0)
	{
		stacks->stack_a.stack = malloc(argc * sizeof(int));
		stacks->stack_b.stack = malloc(argc * sizeof(int));
		if (stacks->stack_a.stack == NULL || stacks->stack_b.stack == NULL)
			return (1);
		stacks->stack_a.max_index = -1;
		stacks->stack_b.max_index = -1;
	}
	return (0);
}
