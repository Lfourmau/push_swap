#include "../../Includes/push_swap.h"

void	replace(t_onestack *stack, int *sorted_tab)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= stack->max_index)
	{
		j = 0;
		while (j <= stack->max_index)
		{
			if (sorted_tab[j] == stack->stack[i])
			{
				stack->stack[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
}

int	replace_values(t_onestack *stack)
{
	int	*sorted_tab;

	sorted_tab = malloc((stack->max_index + 1) * sizeof(int));
	if (sorted_tab == NULL)
		return (1);
	copy_tab(sorted_tab, stack, 0, 0);
	sort_tab(sorted_tab, stack->max_index + 1);
	replace(stack, sorted_tab);
	return (0);
}
