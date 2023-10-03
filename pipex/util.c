/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanseo <sanseo@student.42seoul.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:53:34 by sanseo            #+#    #+#             */
/*   Updated: 2023/09/27 19:11:09 by sanseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void ft_error(char *message)
{
	perror(message);
	exit(EXIT_FAILURE);
}

void ft_free(char ***str)
{
	int i;

	i = 0;
	while ((*str)[i])
		free((*str)[i++]);
	free(*str);
}

char *find_path(char *cmd, char **envp)
{
	int		i;
	char	**paths;
	char	*cmd_path;
	char	*path;

	i = 0;
	while (ft_strnstr(envp[i], "PATH", 4) == 0)
		i++;
	paths = ft_split(envp[i] + 5, ':');
	i = 0;
	while (paths[i])
	{
		path = ft_strjoin(paths[i], "/");
		cmd_path = ft_strjoin(path, cmd);
		free(path);
		if (access(cmd_path, F_OK) == 0)
		{
			ft_free(&paths);
			return (cmd_path);
		}
		free(cmd_path);
		i++;
	}
	ft_free(&paths);
	return (0);
}

void execute_cmd(char *cmd, char **envp)
{
	char	*cmd_path;
	char	**cmd_split;

	cmd_split = ft_split(cmd, ' ');
	cmd_path = find_path(cmd_split[0], envp);
	if (!cmd_path)
	{
		ft_free(&cmd_split);
		free(cmd_path);
		ft_error("commend error!");
	}
	if (execve(cmd_path, cmd_split, envp) == -1)
		ft_error("execve error!");
	printf("fdsafads\n\n\n");
}