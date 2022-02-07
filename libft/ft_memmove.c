/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiks <cdiks@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:10:30 by cdiks             #+#    #+#             */
/*   Updated: 2022/01/19 16:10:32 by cdiks            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			counter;

	counter = 0;
	if ((dst == NULL && (src == NULL)))
		return (0);
	if (dst < src)
	{
		while (n)
		{
			((char *)dst)[counter] = ((char *)src)[counter];
			counter++;
			n--;
		}
	}
	else
	{
		while (n)
		{
			((char *)dst)[n - 1] = ((char *)src)[n - 1];
			n--;
		}
	}
	return (dst);
}
