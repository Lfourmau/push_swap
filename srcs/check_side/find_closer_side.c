#include "../../Includes/push_swap.h"

int run_top(t_onestack stack, int min, int max)
{
	int i;

	i = 0;
	while (i <= stack.max_index)
	{
		if (stack.stack[i] <= max && stack.stack[i] >= min)
			return (i);
		i++;
	}
	return (-1);
}

int run_bottom(t_onestack stack, int min, int max)
{
	int i;

	i = 0;
	while (i <= stack.max_index)
	{
		if (stack.stack[stack.max_index - i] <= max && stack.stack[stack.max_index - i] >= min)
			return (i);
		i++;
	}
	return (-1);
}

char *closer_number(t_stacks *stacks, int min, int max)
{
	int top;
	int bottom;
	int i;

	top = run_top(stacks->stack_a, min, max);
	bottom = run_bottom(stacks->stack_a, min, max);
	i = -1;
	if (bottom == -1 || top == -1)
		return ("NotFound");
	if (bottom < top)
	{
		while (++i <= bottom)
			rra(stacks);
		return ("bottom");
	}
	else
	{
		while (++i < top)
			ra(stacks);
		return ("top");
	}
}