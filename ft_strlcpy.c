/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 09:03:16 by imaalem           #+#    #+#             */
/*   Updated: 2021/02/20 14:33:15 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
	size_t i;
	size_t src_size;

	src_size = 0;
	i = 0;
	if (dst == NULL || src == NULL)
		return (0);
	while (src[src_size])
		src_size++;
	if (dst_size == 0)
		return (src_size);
	while (src[i] && dst[i] && i < (dst_size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_size);
}
