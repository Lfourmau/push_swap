#include "../Includes/push_swap.h"

int	error(t_stacks *stacks)
{
	free_exit(stacks);
	printf("Error\n");
	return (1);
}

int	exec_operations(t_stacks *stacks, char **line)
{
	if (!ft_strncmp(*line, "pb", 3))
		pb(stacks, 0);
	else if (!ft_strncmp(*line, "pa", 3))
		pa(stacks, 0);
	else if (!ft_strncmp(*line, "ss", 3))
		ss(stacks, 0);
	else if (!ft_strncmp(*line, "sa", 3))
		sa(stacks, 0);
	else if (!ft_strncmp(*line, "sb", 3))
		sb(stacks, 0);
	else if (!ft_strncmp(*line, "rrr", 4))
		rrr(stacks, 0);
	else if (!ft_strncmp(*line, "rra", 4))
		rra(stacks, 0);
	else if (!ft_strncmp(*line, "rrb", 4))
		rrb(stacks, 0);
	else if (!ft_strncmp(*line, "rr", 3))
		rr(stacks, 0);
	else if (!ft_strncmp(*line, "ra", 3))
		ra(stacks, 0);
	else if (!ft_strncmp(*line, "rb", 3))
		rb(stacks, 0);
	else
		return (error(stacks));
	return (0);
}

int	detect_operations(t_stacks *stacks, char **line)
{
	while (get_next_line(0, line) != 0)
	{
		if (exec_operations(stacks, line))
		{
			free(*line);
			return (1);
		}
		free(*line);
	}
	free(*line);
	return (0);
}

int	checker(int argc, char **argv)
{
	t_stacks	stacks;
	char		*line;

	line = NULL;
	if (parsing(argc, argv, &stacks))
		return (error(&stacks));
	if (replace_values(&stacks.stack_a))
		return (error(&stacks));
	if (detect_operations(&stacks, &line))
		return (1);
	if (is_sorted(stacks.stack_a) && stacks.stack_b.max_index < 0)
		printf("OK\n");
	else
		printf("KO\n");
	free_exit(&stacks);
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc != 1)
		checker(argc, argv);
	return (1);
}
