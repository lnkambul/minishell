#include "../includes/minishell.h"

void	ft_arrpush(char **arr[], char *args)
{
	int	i;
	int	size;
	char	**dup;
	char	**temp;

	size = ft_arrlen(*arr);
	temp = *arr;
	dup = (char **)malloc(sizeof(char *) * (size + 2));
	i = -1;
	while (temp[++i])
		dup[i] = ft_strdup(temp[i]);
	dup[i++] = ft_strdup(args);
	dup[i] = NULL;
	ft_arrdel(*arr);
	*arr = dup;
}