/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rajarada <rajarada@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 16:58:59 by rajarada          #+#    #+#             */
/*   Updated: 2025/12/04 17:43:24 by rajarada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *c, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;

	if (start > ft_strlen(c))
		return (ft_strdup(""));
	if (len > ft_strlen(c) - start)
		len = ft_strlen(c) - start;
	subs = (char *)malloc(sizeof(char) * len + 1);
	if (subs == 0)
		return (NULL);
	i = 0;
	while (i < len)
	{
		subs[i] = c[start];
		start++;
		i++;
	}
	subs[i] = 0;
	return (subs);
}
/*
int main(void)
{
    printf("%s\n", ft_substr("rama wa'el", 6, 5));
    free(ft_substr("rama wa'el", 6, 5));
    return 0;
}
*/
