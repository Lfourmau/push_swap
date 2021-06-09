#include "../../Includes/push_swap.h"

int	add_front_slot(t_onestack *stack, int value)
{
    int *tmp;
	//we add 2 -> 1 to have the number of values, note the index. 1 to have 1 value more for add.
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

int	add_back_slot(t_onestack *stack, int value)
{
    int *tmp;
	//we add 2 -> 1 to have the number of values, note the index. 1 to have 1 value more for add.
    tmp = malloc((stack->max_index + 2) * sizeof(int));
    if (tmp == NULL)
        return (1);
    tmp[stack->max_index + 1] = value;
    copy_tab(tmp, stack->stack, 0, stack->max_index, 0);
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
	printf("heyheyhey\n");
	//free(stack->stack); sinon segfault quand on appelle RB apres RA dans le main
	stack->stack = tmp;
	return (0);
}
