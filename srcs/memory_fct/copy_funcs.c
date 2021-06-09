#include "../../Includes/push_swap.h"

void	stack_a_to_b(t_stacks *stacks)
{
	int	i;

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
	int	i;

	i = 0;
	while (i <= stacks->stack_b.max_index)
	{
		stacks->stack_a.stack[i] = stacks->stack_b.stack[i];
		i++;
	}
	stacks->stack_a.max_index = stacks->stack_b.max_index;
}

void	copy_tab(int *dest, int *src, int start_dst, int maxindex, int start_src)
{
	int	i;
	int	j;

	i = start_dst;
	j = start_src;
	while (j <= maxindex)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
}
