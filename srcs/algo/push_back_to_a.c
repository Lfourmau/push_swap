#include "../../Includes/push_swap.h"

int found_index(t_stacks *stacks, int value)
{
    int i;

    i = 0;
    while (i <= stacks->stack_b.max_index)
    {
        if (stacks->stack_b.stack[i] == value)
            return (i);
        i++;
    }
    return (-1);
}

int bring_to_top(t_stacks *stacks)
{
	int index;
	int i;

	i = 0;
	index = found_index(stacks, stacks->stack_b.max_index);
	while (i < index)
	{
		rb(stacks);
		i++;
	}
	return (0);
}

int push_back_to_a(t_stacks *stacks)
{
	while (stacks->stack_b.max_index >= 0)
	{
		bring_to_top(stacks);
		pa(stacks);
	}
}