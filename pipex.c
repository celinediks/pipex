/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiks <cdiks@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 11:05:55 by cdiks             #+#    #+#             */
/*   Updated: 2022/01/19 15:22:52 by cdiks            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"
#include <stdio.h>
#include <fcntl.h>

void	child_process(int *end, char *cmd1, char **env)
{
	int		x;

	x = dup2(end[1], STDOUT);
	if (x < 0)
		return (perror("dup failed"));
	close(end[0]);
	execute(cmd1, env);
}

void	parent_process(int *end, char *cmd2, char **env)
{
	int		x;

	waitpid(-1, NULL, 0);
	x = dup2(end[0], STDIN);
	if (x < 0)
		return (perror("dup failed"));
	close(end[1]);
	execute(cmd2, env);
}

int	check_file(char filename, char *name)
{
	if (filename == 'i')
	{
		if (access(name, F_OK) == 0)
			return (open(name, O_RDONLY));
		else
		{
			write(2, "no such file or directory: ", 28);
			write(2, name, ft_strlen(name));
			write(2, "\n", 1);
			exit(0);
		}
	}
	else
		return (open(name, O_CREAT | O_RDWR | O_TRUNC, 0644));
	return (0);
}

void	pipex(char *cmd1, char *cmd2, char **env)
{
	int		end[2];
	int		p;
	pid_t	id;

	p = pipe(end);
	if (p < 0)
		return (perror("pipe failed"));
	id = fork();
	if (id < 0)
		return (perror("fork failed"));
	if (id == 0)
		child_process(end, cmd1, env);
	else
		parent_process(end, cmd2, env);
	return ;
}

int	main(int argc, char **argv, char **env)
{
	int		infile;
	int		outfile;
	char	*cmd1;
	char	*cmd2;

	if (argc == 5)
	{
		infile = check_file('i', argv[1]);
		outfile = check_file('o', argv[4]);
		if (infile < 0 || outfile < 0)
			return (0);
		dup2(infile, STDIN);
		dup2(outfile, STDOUT);
		cmd1 = argv[2];
		cmd2 = argv[3];
		pipex(cmd1, cmd2, env);
		close(infile);
		close(outfile);
	}
	return (0);
}
