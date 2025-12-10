/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rajarada <rajarada@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 15:16:56 by rajarada          #+#    #+#             */
/*   Updated: 2025/11/29 15:19:28 by rajarada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ds;
	size_t	i;
	size_t	s;

	i = 0;
	s = ft_strlen(dst);
	if (size <= s)
		return (size + ft_strlen(src));
	ds = size - s - 1;
	while (src[i] && i < ds)
	{
		dst[s + i] = src[i];
		i++;
	}
	dst[s + i] = '\0';
	return (s + ft_strlen(src));
}
