/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiks <cdiks@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:11:27 by cdiks             #+#    #+#             */
/*   Updated: 2022/01/19 16:11:29 by cdiks            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	counter;
	char	*x;

	x = (char *)s;
	counter = 0;
	while (counter != ft_strlen((char *)s) + 1)
	{
		if ((char)c == x[counter])
			return (&x[counter]);
		counter++;
	}
	return (NULL);
}
