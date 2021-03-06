#include "../includes/minishell.h"

char	*ft_pathprep(char *args, char *cmd)
{
	char	**paths;
	char	*temp;
	char	*path;
	int	i;

	i = -1;
	paths = ft_strsplit(args, ':');
	while (paths && paths[++i])
	{
		temp = ft_strjoin(paths[i], "/");
		path = ft_strjoin(temp, cmd);
		if (ft_userex(path) > 0)
		{
			ft_arrdel(paths);
			free(temp);
			return(path);
		}
		free(temp);
		free(path);
		temp = NULL;
		path = NULL;
	}
	(paths) ? ft_arrdel(paths) : NULL;
	(temp) ? free(temp) : NULL;
	return (path);
}
