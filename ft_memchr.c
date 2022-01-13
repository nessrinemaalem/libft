/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 14:44:38 by imaalem           #+#    #+#             */
/*   Updated: 2021/02/22 11:13:12 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	a;
	char	*src;

	a = 0;
	src = (char*)s;
	while (a < n)
	{
		if ((int)src[a] == c)
			return ((void*)&s[a]);
		a++;
	}
	return (NULL);
}
