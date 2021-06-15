#include "../../Includes/push_swap.h"

int    pa(t_stacks *stacks)
{
    if (stacks->stack_b.max_index != -1)
    {
		if (add_front_slot(&stacks->stack_a, stacks->stack_b.stack[0]) == 1)
			return (1);
		if (del_front_value(&stacks->stack_b))
			return (1);
		printf("pa\n");
    }
	return (0);
}
