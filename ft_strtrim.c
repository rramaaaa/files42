/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rajarada <rajarada@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 11:30:10 by rajarada          #+#    #+#             */
/*   Updated: 2025/12/10 13:43:13 by rajarada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;

	i = 0;
	if (!s1 || !set || s1[0] == '\0')
		return (ft_strdup(""));
	j = ft_strlen(s1) - 1;
	while (s1[i] && ft_strchr(set, (int)s1[i]))
		i++;
	while (j > i && ft_strrchr(set, (int)s1[j]))
		j--;
	if (j < i)
		return (ft_strdup(""));
	return (ft_substr(s1, i, j - i + 1));
}
/*
int	main(void)
{
	char	*trim = ft_strtrim("%$$rama%$$", "%$");
	printf("%s", trim);
	free(trim);
	return (0);
}
*/
