/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiks <cdiks@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:11:55 by cdiks             #+#    #+#             */
/*   Updated: 2022/01/19 16:11:56 by cdiks            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	counter;
	char	*x;

	counter = 0;
	x = (char *)src;
	if (dstsize == 0)
		return (ft_strlen(x));
	while (counter != (dstsize - 1) && (src[counter] != '\0'))
	{
		dst[counter] = x[counter];
		counter++;
	}
	dst[counter] = '\0';
	return (ft_strlen(x));
}
