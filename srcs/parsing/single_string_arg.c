#include "../../Includes/push_swap.h"

int number_splits(char **split)
{
    int i;

    i = 0;
    if (!split)
        return (0);
    while (split[i])
        i++;
    return (i);
}

char **split_arg(char *str)
{
    char **res;
 
    res = ft_split(str, ' ');
    return (res);
}

char **single_arg_operations(int *argc, char **argv)
{
    argv = split_arg(argv[1]);
    *argc = number_splits(argv);
    return (argv);
}