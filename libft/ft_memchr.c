/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiks <cdiks@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:10:10 by cdiks             #+#    #+#             */
/*   Updated: 2022/01/19 16:10:12 by cdiks            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			counter;
	unsigned char	*x;

	counter = 0;
	x = (unsigned char *)s;
	while (counter != n)
	{
		if (x[counter] == (unsigned char) c)
			return (&(x[counter]));
		counter++;
	}
	return (0);
}
