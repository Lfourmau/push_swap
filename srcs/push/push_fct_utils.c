#include "../../Includes/push_swap.h"

int	add_front_slot(t_onestack *stack, int value)
{
    int *tmp;

    tmp = malloc((stack->max_index + 2) * sizeof(int));
    if (tmp == NULL)
        return (1);
    tmp[0] = value;
    copy_tab(tmp, stack->stack, 1, stack->max_index, 0);
    stack->max_index++;
    free(stack->stack);
    stack->stack = tmp;
	return (0);
}

int	del_front_value(t_onestack *stack)
{
	int *tmp;

	tmp = malloc((stack->max_index - 1) * sizeof(int));
	if (tmp == NULL)	
		return (1);
	copy_tab(tmp, stack->stack, 0, stack->max_index, 1);
	stack->max_index--;
	free(stack->stack);
	stack->stack = tmp;
	return (0);
}
