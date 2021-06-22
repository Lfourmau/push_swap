#include "../Includes/push_swap.h"

int	error(t_stacks *stacks)
{
	free_exit(stacks);
	printf("Error\n");
	return (1);
}

int	main(int argc, char **argv)
{
	t_stacks	stacks;

	if (argc == 1)
		return (1);
	if (parsing(argc, argv, &stacks) == 1)
		return (error(&stacks));
	if (replace_values(&stacks.stack_a))
		return (error(&stacks));
	if (is_sorted(stacks.stack_a))
	{
		free_exit(&stacks);
		return (1);
	}
	if (stacks.stack_a.max_index > 4)
		big_list(&stacks);
	else if (stacks.stack_a.max_index == 1)
		two_list_a(&stacks);
	else if (stacks.stack_a.max_index == 2)
		three_list_a(&stacks);
	else if (stacks.stack_a.max_index == 4)
		five_list_a(&stacks);
	free_exit(&stacks);
}
