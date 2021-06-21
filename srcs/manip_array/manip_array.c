#include "../../Includes/push_swap.h"

int	add_front_slot(t_onestack *stack, int value)
{
	int	*tmp;

	printf("[%d]\n\n", stack->max_index);
	//we add 2 -> 1 to have the number of values, note the index. 1 to have 1 value more for add.
	tmp = malloc((stack->max_index + 2) * sizeof(int));
	printf("ololo2\n\n");
	if (tmp == NULL)
		return (1);
	tmp[0] = value;
	copy_tab(tmp, stack, 1, 0);
	stack->max_index++;
	//free(stack->stack);
	stack->stack = tmp;
	return (0);
}

int	add_back_slot(t_onestack *stack, int value)
{
	int	*tmp;
	//we add 2 -> 1 to have the number of values, note the index. 1 to have 1 value more for add.
	tmp = malloc((stack->max_index + 2) * sizeof(int));
	if (tmp == NULL)
		return (1);
	tmp[stack->max_index + 1] = value;
	copy_tab(tmp, stack, 0, 0);
	stack->max_index++;
	//free(stack->stack);
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
	//free(stack->stack); sinon segfault quand on appelle RB apres RA dans le main
	stack->stack = tmp;
	return (0);
}

int	del_back_value(t_onestack *stack)
{
	int	*tmp;
	//in this case, i decrémente maxindex BEFOR copy_tab because i don't want to copy the last value, it will be deleted.
	tmp = malloc((stack->max_index) * sizeof(int));
	if (tmp == NULL)
		return (1);
	stack->max_index--;
	copy_tab(tmp, stack, 0, 0);
	//free(stack->stack); sinon segfault quand on appelle RB apres RA dans le main
	stack->stack = tmp;
	return (0);
}

void	sort_tab(int *tab, int size)
{
	int i;
	int tmp;

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
