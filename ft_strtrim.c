/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:28:44 by imaalem           #+#    #+#             */
/*   Updated: 2021/02/14 14:12:44 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		start;
	int		end;
	char	len;

	str = (char *)s;
	start = 0;
	end = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(str);
	while (s[len - 1] == ' ' || s[len - 1] == '\t' || s[len - 1] == '\n')
		len--;
	while (s[start] == '\n' || s[start] == ' ' || s[start] == '\t')
	{
		start++;
		len--;
	}
	if (len < 0)
		len = 0;
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (end < len)
		str[end++] = s[start++];
	str[end] = '\0';
	return (str);
}
