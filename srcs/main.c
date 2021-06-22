#include "../Includes/push_swap.h"

void	big_list(t_stacks *stacks)
{
	push_packs_to_b(stacks);
	push_back_to_a(stacks);
}

int	check_three_list(t_stacks *stacks)
{
	if (stacks->stack_a.stack[0] > stacks->stack_a.stack[1] 
	&& stacks->stack_a.stack[1] < stacks->stack_a.stack[2] && stacks->stack_a.stack[2] > stacks->stack_a.stack[0])
		return (1);
	else if (stacks->stack_a.stack[0] > stacks->stack_a.stack[1] 
	&& stacks->stack_a.stack[1] > stacks->stack_a.stack[2])
		return (2);
	else if (stacks->stack_a.stack[0] > stacks->stack_a.stack[1] 
	&& stacks->stack_a.stack[1] > stacks->stack_a.stack[2])
		return (3);
	else if (stacks->stack_a.stack[0] > stacks->stack_a.stack[1] 
	&& stacks->stack_a.stack[1] < stacks->stack_a.stack[2] && stacks->stack_a.stack[2] < stacks->stack_a.stack[0])
		return (4);
	else if (stacks->stack_a.stack[0] < stacks->stack_a.stack[1] 
	&& stacks->stack_a.stack[1] > stacks->stack_a.stack[2] && stacks->stack_a.stack[2] > stacks->stack_a.stack[0])
		return (5);
	else if (stacks->stack_a.stack[0] < stacks->stack_a.stack[1] 
	&& stacks->stack_a.stack[1] > stacks->stack_a.stack[2] && stacks->stack_a.stack[2] < stacks->stack_a.stack[0])
		return (6);
	return (0);
}

void	three_list(t_stacks *stacks)
{
	if (check_three_list(stacks) == 1)
		sa(stacks);
	else if (check_three_list(stacks) == 2)
	{
		sa(stacks);
		rra(stacks);
	}
	else if (check_three_list(stacks) == 3)
	{
		sa(stacks);
		rra(stacks);
	}
	else if (check_three_list(stacks) == 4)
		ra(stacks);
	else if (check_three_list(stacks) == 5)
	{
		sa(stacks);
		ra(stacks);
	}
	else if (check_three_list(stacks) == 6)
		rra(stacks);
}

void	five_list(t_stacks *stacks)
{
	bring_top_a(stacks, 0, 0);
	pb(stacks);
	bring_top_a(stacks, 1, 1);
	pb(stacks);
	three_list(stacks);
	if (stacks->stack_b.stack[0] < stacks->stack_b.stack[1])
		sb(stacks);
	pa(stacks);
	pa(stacks);
}

int	error(void)
{
	printf("Error\n");
	return (1);
}

int	main(int argc, char **argv)
{
	t_stacks	stacks;
	int			i = 0;

	if (parsing(argc, argv, &stacks))
		return (error());
	if (replace_values(&stacks.stack_a))
		return (error());
	if (is_sorted(stacks.stack_a))
		return (1);
	if (stacks.stack_a.max_index > 4)
		big_list(&stacks);
	else if (stacks.stack_a.max_index == 2)
		three_list(&stacks);
	else if (stacks.stack_a.max_index == 4)
		five_list(&stacks);
	while (i <= stacks.stack_a.max_index)
	{
		printf("%d\n", stacks.stack_a.stack[i]);
		i++;
	}
	// free_exit(stacks); necessaire pour regler les 3 derniers leaks, mais dit qu'on modifie une valeur apres l'avoir free.
}
