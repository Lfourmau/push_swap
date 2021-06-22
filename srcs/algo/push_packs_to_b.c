#include "../../Includes/push_swap.h"

int	run_top(t_onestack stack, int min, int max)
{
	int	i;

	i = 0;
	while (i <= stack.max_index)
	{
		if (stack.stack[i] <= max && stack.stack[i] >= min)
			return (i);
		i++;
	}
	return (-1);
}

int	run_bottom(t_onestack stack, int min, int max)
{
	int	i;

	i = 0;
	while (i <= stack.max_index)
	{
		if (stack.stack[stack.max_index - i] <= max && stack.stack[stack.max_index - i] >= min)
			return (i);
		i++;
	}
	return (-1);
}

int	bring_top_a(t_stacks *stacks, int min, int max)
{
	int	top;
	int	bottom;
	int	i;

	//find the closest side and do ra or rra X times to put the nb at the top
	top = run_top(stacks->stack_a, min, max);
	bottom = run_bottom(stacks->stack_a, min, max);
	i = -1;
	if (bottom == -1 || top == -1)
		return (1);
	if (bottom < top)
	{
		while (++i <= bottom)
			rra(stacks);
	}
	else
	{
		while (++i < top)
			ra(stacks);
	}
	return (0);
}

int	push_packs_to_b(t_stacks *stacks)
{
	int	min;
	int	max;
	int	nb_elements;
	int	i;

	nb_elements = stacks->stack_a.max_index + 1;
	i = 1;
	min = 0;
	max = size_packs(nb_elements);
	//printf("nb packs : %d -- size : %d\n\n", nb_packs(nb_elements), max);
	while (i <= nb_packs(nb_elements))
	{
		while (bring_top_a(stacks, min, max) != 1)
			pb(stacks);
		min = max + 1;
		max = min + size_packs(nb_elements);
		i++;
	}
	return (0);
}
