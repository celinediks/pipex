/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiks <cdiks@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:11:34 by cdiks             #+#    #+#             */
/*   Updated: 2022/01/19 16:11:36 by cdiks            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*ptr;

	len = (ft_strlen(s1) + 1);
	ptr = malloc(len);
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s1, len);
	return (ptr);
}
