/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rajarada <rajarada@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 14:07:46 by rajarada          #+#    #+#             */
/*   Updated: 2025/11/29 14:11:36 by rajarada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	c;

	c = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[c] && c < size - 1)
	{
		dst[c] = src[c];
		c++;
	}
	dst[c] = 0;
	return (ft_strlen(src));
}
