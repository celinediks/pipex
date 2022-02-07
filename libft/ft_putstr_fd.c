/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiks <cdiks@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:11:17 by cdiks             #+#    #+#             */
/*   Updated: 2022/01/19 16:11:18 by cdiks            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int		counter;

	if (!s)
		return ;
	counter = 0;
	while ((s[counter] != '\0') && (s))
	{
		write(fd, &s[counter], 1);
		counter++;
	}
}
