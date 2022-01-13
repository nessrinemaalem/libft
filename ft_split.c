/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 11:30:32 by imaalem           #+#    #+#             */
/*   Updated: 2021/02/22 11:56:44 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include "libft.h"

int		ft_count_word(char const *s, char c)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (s[i])
	{
		if (s[i] && s[i] == c)
			++j;
		while (s[i] && s[i] == c)
			i++;
		i++;
	}
	return (j);
}

int		ft_ln_word(char const *s, int i, char c)
{
	int count;

	count = 0;
	while (s[i] && s[i] != c)
	{
		count++;
		i++;
	}
	return (count);
}

int		ft_fill(char **res, const char *s, char c, int j)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (s[i] && s[i] != c)
	{
		res[j][k] = (char)s[i];
		i++;
		k++;
	}
	res[j][k] = '\0';
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (!(res = (char **)malloc(sizeof(char *) * (ft_count_word(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			if (!(res[j] = (char *)malloc((ft_ln_word(s, i, c) + 1))))
				return (NULL);
			i += ft_fill(res, s + i, c, j);
			j++;
		}
	}
	res[j] = NULL;
	return (res);
}
