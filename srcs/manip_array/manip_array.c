#include "../../Includes/push_swap.h"

int	add_front_slot(t_onestack *stack, int value)
{
	int	*tmp;

	tmp = malloc((stack->max_index + 2) * sizeof(int));
	if (tmp == NULL)
		return (1);
	tmp[0] = value;
	copy_tab(tmp, stack, 1, 0);
	stack->max_index++;
	free(stack->stack);
	stack->stack = tmp;
	return (0);
}

int	add_back_slot(t_onestack *stack, int value)
{
	int	*tmp;

	tmp = malloc((stack->max_index + 2) * sizeof(int));
	if (tmp == NULL)
		return (1);
	tmp[stack->max_index + 1] = value;
	copy_tab(tmp, stack, 0, 0);
	stack->max_index++;
	free(stack->stack);
	stack->stack = tmp;
	return (0);
}

int	del_front_value(t_onestack *stack)
{
	int	*tmp;

	tmp = malloc((stack->max_index) * sizeof(int));
	if (tmp == NULL)
		return (1);
	copy_tab(tmp, stack, 0, 1);
	stack->max_index--;
	free(stack->stack);
	stack->stack = tmp;
	return (0);
}

int	del_back_value(t_onestack *stack)
{
	int	*tmp;

	tmp = malloc((stack->max_index) * sizeof(int));
	if (tmp == NULL)
		return (1);
	stack->max_index--;
	copy_tab(tmp, stack, 0, 0);
	free(stack->stack);
	stack->stack = tmp;
	return (0);
}

void	sort_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	size--;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			sort_tab(tab, size);
		}
		else
			i++;
	}
}
