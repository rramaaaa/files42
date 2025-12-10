/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rajarada <rajarada@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 11:42:26 by rajarada          #+#    #+#             */
/*   Updated: 2025/11/29 11:46:48 by rajarada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
int	main(void)
{
	char	str[7] = "Markos";

	ft_bzero(str+1, 3*sizeof(char));
	printf("string after ft_bzero(): %s\n", str);
	int i = 0;
	while (i < 6)
	{
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}
*/
