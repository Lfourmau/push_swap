#include "../../Includes/push_swap.h"

void	big_list(t_stacks *stacks)
{
	push_packs_to_b(stacks);
	push_back_to_a(stacks);
}

int	check_three_list_a(t_stacks *stacks)
{
	if (stacks->stack_a.stack[0] > stacks->stack_a.stack[1]
		&& stacks->stack_a.stack[1] < stacks->stack_a.stack[2]
		&& stacks->stack_a.stack[2] > stacks->stack_a.stack[0])
		return (1);
	else if (stacks->stack_a.stack[0] > stacks->stack_a.stack[1]
		&& stacks->stack_a.stack[1] > stacks->stack_a.stack[2])
		return (2);
	else if (stacks->stack_a.stack[0] > stacks->stack_a.stack[1]
		&& stacks->stack_a.stack[1] > stacks->stack_a.stack[2])
		return (3);
	else if (stacks->stack_a.stack[0] > stacks->stack_a.stack[1]
		&& stacks->stack_a.stack[1] < stacks->stack_a.stack[2]
		&& stacks->stack_a.stack[2] < stacks->stack_a.stack[0])
		return (4);
	else if (stacks->stack_a.stack[0] < stacks->stack_a.stack[1]
		&& stacks->stack_a.stack[1] > stacks->stack_a.stack[2]
		&& stacks->stack_a.stack[2] > stacks->stack_a.stack[0])
		return (5);
	else if (stacks->stack_a.stack[0] < stacks->stack_a.stack[1]
		&& stacks->stack_a.stack[1] > stacks->stack_a.stack[2]
		&& stacks->stack_a.stack[2] < stacks->stack_a.stack[0])
		return (6);
	return (0);
}

void	three_list_a(t_stacks *stacks)
{
	if (check_three_list_a(stacks) == 1)
		sa(stacks, 1);
	else if (check_three_list_a(stacks) == 2)
	{
		sa(stacks, 1);
		rra(stacks, 1);
	}
	else if (check_three_list_a(stacks) == 3)
	{
		sa(stacks, 1);
		rra(stacks, 1);
	}
	else if (check_three_list_a(stacks) == 4)
		ra(stacks, 1);
	else if (check_three_list_a(stacks) == 5)
	{
		sa(stacks, 1);
		ra(stacks, 1);
	}
	else if (check_three_list_a(stacks) == 6)
		rra(stacks, 1);
}

void	five_list_a(t_stacks *stacks)
{
	bring_top_a(stacks, 0, 0);
	pb(stacks, 1);
	bring_top_a(stacks, 1, 1);
	pb(stacks, 1);
	three_list_a(stacks);
	if (stacks->stack_b.stack[0] < stacks->stack_b.stack[1])
		sb(stacks, 1);
	pa(stacks, 1);
	pa(stacks, 1);
}

void	two_list_a(t_stacks *stacks)
{
	if (stacks->stack_a.stack[0] > stacks->stack_a.stack[1])
		sa(stacks, 1);
}
