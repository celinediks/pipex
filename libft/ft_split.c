/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiks <cdiks@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:11:23 by cdiks             #+#    #+#             */
/*   Updated: 2022/01/19 16:11:24 by cdiks            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	int	j;
	int	i;

	j = 0;
	i = 0;
	if (s[i] != c)
		j++;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			if (s[i + 1] != c && s[i + 1] != '\0')
				j++;
		}
		i++;
	}
	return (j);
}

static int	word_length(char const *s, char c)
{
	int	i;

	i = 0;
	while ((s[i] != '\0') && (s[i] != c))
		i++;
	return (i);
}

static char	**free_arr(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr);
		i++;
	}
	free(arr);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	arr = ft_calloc(word_count(s, c) + 1, sizeof(char *));
	if (!arr)
		return (NULL);
	while (j != (word_count(s, c)) && (s[i] != '\0'))
	{
		while (s[i] == c)
			i++;
		len = word_length(&s[i], c);
		arr[j] = ft_substr(&s[i], 0, len);
		if (!arr[j])
			return (free_arr(arr));
		i += len;
		j++;
	}
	return (arr);
}
