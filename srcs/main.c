#include "../Includes/push_swap.h"

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
		three_list_a(&stacks);
	else if (stacks.stack_a.max_index == 4)
		five_list_a(&stacks);
	while (i <= stacks.stack_a.max_index)
	{
		printf("%d\n", stacks.stack_a.stack[i]);
		i++;
	}
	//free_exit(&stacks);
}
