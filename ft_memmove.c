/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rajarada <rajarada@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 13:41:05 by rajarada          #+#    #+#             */
/*   Updated: 2025/11/29 13:50:19 by rajarada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!d || !s)
		return (NULL);
	if (s > d)
		return (ft_memcpy(d, s, n));
	else
	{
		while (n--)
			d[n] = s[n];
	}
	return (d);
}
/*
int main(void)
{
    char str[] = "abcdef";

    ft_memmove(str + 2, str, 4);
    printf("Result: %s\n", str);
    return 0;
}
*/
