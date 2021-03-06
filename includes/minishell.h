#ifndef MINISHELL_H
# define MINISHELL_H
# define PATH_MAX 256
# include <sys/types.h>
# include <sys/stat.h>
# include <sys/wait.h>
# include "../libft/includes/libft.h"

/*core shell functions*/
void	ft_parse(char *args[], int count, char **env[]);
int	ft_countargs(char *args);
int	ft_closequote(char *args, int index);
char	**ft_explode(char *arr, int count);
char	*ft_argsub(char *args, int *index);
void	ft_command(char **cmd[], char **env[]);
char	*ft_resolve(char *cmd, char *env[]);
void	ft_prompt();
char	*ft_key(char *args);
char	*ft_setpath(char *args, char *env[]);
int	ft_checkdir(char *args);
char	*ft_dirpath(char *args, char **env[]);
/*built-ins*/
void	ft_exit(char **cmd[], char **env[]);
void	ft_echo(char **cmd[], char **env[]);
void	ft_cd(char **cmd[], char **env[]);
void	ft_env(char **cmd[], char **env[]);
void	ft_setenv(char **cmd[], char **env[]);
void	ft_unsetenv(char **cmd[], char **env[]);
/*array manipulation*/
int	ft_arrstr(char *arr[], char *args);
char	**ft_arrdup(char *arr[]);
int	ft_arrlen(char *arr[]);
void	ft_arrdel(char *arr[]);
void	ft_arrprint(char *arr[], char **env[]);
void	ft_arrpush(char **arr[], char *args);
void	ft_remove(char **arr[], int index);
/*misc*/
void	ft_replace(char **arr[], char *args, int index, char *key);
char	*ft_pathprep(char *args, char *cmd);
void	ft_setcd(char *args, char **env[]);
char	*ft_initkey(char *args);
int	ft_invalidkey(char *args[]);
int	ft_iswhitespace(char c);
int	ft_userex(char *c);
int	ft_isquote(char c);
void	ft_error(char *args, int type);
#endif
