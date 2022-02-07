/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiks <cdiks@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:12:32 by cdiks             #+#    #+#             */
/*   Updated: 2022/01/19 16:12:33 by cdiks            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		counter;
	char	*x;

	x = (char *)s;
	counter = ft_strlen(x);
	while (counter > -1)
	{
		if ((char)c == x[counter])
			return (&x[counter]);
		counter--;
	}
	return (NULL);
}
