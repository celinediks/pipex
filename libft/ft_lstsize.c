/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiks <cdiks@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:10:05 by cdiks             #+#    #+#             */
/*   Updated: 2022/01/19 16:10:07 by cdiks            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		counter;

	if (!lst)
		return (0);
	counter = 1;
	while (lst->next != NULL)
	{
		lst = lst->next;
		counter++;
	}
	return (counter);
}
