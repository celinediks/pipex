/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiks <cdiks@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 10:49:57 by cdiks             #+#    #+#             */
/*   Updated: 2022/01/19 14:38:04 by cdiks            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"
#include <stdio.h>

char	*get_path(char **env)
{
	int	i;

	i = 0;
	while (env[i])
	{
		if (ft_strncmp(env[i], "PATH", 4) == 0)
			return (env[i] + 5);
		i++;
	}
	return (NULL);
}

char	*search_path(char **paths, char *cmdarg)
{
	int		i;
	char	*final_cmd;

	i = 0;
	while (paths[i])
	{
		final_cmd = ft_strjoin(ft_strjoin(paths[i], "/"), cmdarg);
		if (access(final_cmd, F_OK) == 0)
			return (final_cmd);
		free(final_cmd);
		i++;
	}
	return (NULL);
}

char	*execute(char *cmd, char **env)
{
	char	**paths;
	char	**cmdarg;
	char	*path_env;
	char	*final_cmd;

	path_env = get_path(env);
	paths = ft_split(path_env, ':');
	cmdarg = ft_split(cmd, ' ');
	final_cmd = search_path(paths, cmdarg[0]);
	if (final_cmd == NULL)
		exit(0);
	else
		execve(final_cmd, cmdarg, env);
	perror("could not execute");
	return (0);
}
