/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiks <cdiks@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:11:50 by cdiks             #+#    #+#             */
/*   Updated: 2022/01/19 16:11:51 by cdiks            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;

	dlen = ft_strlen(dst);
	if (dstsize > dlen)
		ft_strlcpy(dst + dlen, src, dstsize - dlen);
	if (dstsize < dlen)
		return (ft_strlen(src) + dstsize);
	return (dlen + ft_strlen(src));
}
