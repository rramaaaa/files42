/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rajarada <rajarada@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 16:57:58 by rajarada          #+#    #+#             */
/*   Updated: 2025/12/04 12:48:11 by rajarada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *t, const char *l, size_t len)
{
	size_t	strlen;

	strlen = ft_strlen(l);
	if (!*l)
		return ((char *)t);
	while (*t && len > 0)
	{
		if (!(ft_strncmp(t, l, strlen)) && len >= strlen)
			return ((char *)t);
		t++;
		len--;
	}
	return (NULL);
}
/*
int main(void)
{
    printf("%s",ft_strnstr("Hello, World!", "World", 20));
    return 0;
}
*/
