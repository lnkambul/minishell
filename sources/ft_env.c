#include "../includes/minishell.h"

void	ft_env(char **command[], char **env[])
{
	int	i;
	char	**arr;

	ft_arrdel(*command);
	i = -1;
	arr = *env;
	while (arr[++i])
		ft_putendl(arr[i]);
}
