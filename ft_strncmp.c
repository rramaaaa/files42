/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rajarada <rajarada@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 11:22:39 by rajarada          #+#    #+#             */
/*   Updated: 2025/12/04 12:00:06 by rajarada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	j;

	j = 0;
	while (s1[j] == s2[j] && s1[j] && j < n)
		j++;
	if (j < n)
		return ((unsigned char)s1[j] - (unsigned char)s2[j]);
	return (0);
}
/*
int main(void)
{
    printf("%d", ft_strncmp("Hello", "Helium", 5));
    return 0;
}
*/
