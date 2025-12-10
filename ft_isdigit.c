/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rajarada <rajarada@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 12:46:29 by rajarada          #+#    #+#             */
/*   Updated: 2025/11/26 14:13:59 by rajarada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*#include "stdio.h"
int	main(void)
{
	printf("%d", ft_isdigit(6));
	printf("%d", ft_isdigit('a'));
	return (0);
}
*/
