#include "../../Includes/push_swap.h"
//check there is no letters in args
int	full_digits_check(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		if (argv[i][j] == '-')
			j++;
		while (argv[i][j] && ft_isdigit(argv[i][j]))
			j++;
		if (argv[i][j])
			return (1);
		i++;
	}
	return (0);
}
//check numbers are good with int type
int	int_check(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (ft_atoi(argv[i]) > INT_MAX || ft_atoi(argv[i]) < INT_MIN)
			return (1);
		i++;
	}
	return (0);
}
//fill a array
void	fill_stack(int argc, char **argv, t_stacks stacks)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		if (argv[i])
			stacks.stack_a[j] = ft_atoi(argv[i]);
		i++;
		j++;
	}
}
//check dupplicates numbers
int		check_double(int argc, t_stacks stacks)
{
	int i;
	int j;
	
	i = 0;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc - 1)
		{
			if (stacks.stack_a[i] == stacks.stack_a[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	parsing(int argc, char **argv, t_stacks stacks)
{
	if (full_digits_check(argc, argv))
		return (1);
	if (int_check(argc, argv))
		return (1);
	fill_stack(argc, argv, stacks);
	if (check_double(argc, stacks))
		return (1);
	return (0);
}
