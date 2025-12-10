/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rajarada <rajarada@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 15:16:09 by rajarada          #+#    #+#             */
/*   Updated: 2025/12/04 15:52:49 by rajarada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	p = malloc(size * nmemb);
	if (p)
		ft_bzero(p, nmemb * size);
	return (p);
}
/*
int main(void)
{
    int *arr = ft_calloc(5, sizeof(int));
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    return 0;
}
*/
