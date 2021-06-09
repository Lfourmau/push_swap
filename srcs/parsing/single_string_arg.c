#include "../../Includes/push_swap.h"

int	number_splits(char **split)
{
	int	i;

	i = 0;
	if (!split)
		return (0);
	while (split[i])
		i++;
	return (i);
}

char	**single_arg_operations(int *argc, char **argv)
{
	argv = ft_split(argv[1], ' ');
	*argc = number_splits(argv);
	return (argv);
}
