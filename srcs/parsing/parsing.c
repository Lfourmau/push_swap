#include "../../Includes/push_swap.h"

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

int	int_check(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		printf("%lu\n", ft_atoi(argv[i]));
		if (ft_atoi(argv[i]) > INT_MAX || ft_atoi(argv[i]) < INT_MIN)
			return (1);
		i++;
	}
	return (0);
}

int	fill_piles(int argc, char **argv)
{
	
}

int	parsing(int argc, char **argv)
{
	if (full_digits_check(argc, argv))
		return (1);
	if (int_check(argc, argv))
		return (1);
	
	return (0);
}
