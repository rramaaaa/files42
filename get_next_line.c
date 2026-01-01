/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rajarad <rajarad@learner.42.tech>          #+#  +:+       +#+        */
/*                                                +#+  +:+       +#+           */
/*   Created: 2026/01/01 16:13:02   by rajarad         #+#    #+#             */
/*   Updated: 2026/01/01 16:13:02  by rajarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char *read_to_stash(int fd, char *stash)
{
	char	*buf;
	ssize_t	readn;
	char	*tem;
	
	buf = (char *)malloc((size_t)BUFFER_SIZE + 1);
	if (!buf)
		return (NULL);
	readn = 1;
	while ((!stash || !ft_strchr(stash, '\n')) && readn > 0)
	{
		readn = read(fd, buf, BUFFER_SIZE);
		if (readn < 0)
		{
			free(buf);
			free(stash);
			return (NULL);
		}
		buf[readn] = '\0';
		if (!stash)
			stash = ft_strdup("");
		tem = ft_strjoin(stash, buf);
		free(stash);
		stash = tem;
		if (!stash)
		{
			free(buf);
			return (NULL);
		}
	}
	free(buf);
	return (stash);
}

static char *extract_line(char *stash)
{
	size_t	i;

	if (!stash || stash[0] == '\0')
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	if (stash[i] == '\n')
		i++;
	return (ft_substr(stash, 0, i));
}

static char *update_stash(char *stash)
{
	size_t	i;
	char	*new_stash;

	if (!stash)
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	if (stash[i] == '\0')
	{
		free(stash);
		return (NULL);
	}
	i++;
	new_stash = ft_strdup(stash + i);
	free(stash);
	return (new_stash);
}

char	*get_next_line(int fd)
{
	static char *stashes[OPEN_MAX];
	char	*line;
	if (fd < 0 || fd >= OPEN_MAX || BUFFER_SIZE <= 0)
		return (NULL);
	stash[fd] = read_to_stash(fd, stash[fd]);
	if (!stash[fd])
		return (NULL);
	line = extract_line(stash[fd]);
	stash[fd] = update_stash(stash[fd]);
	return (line);
}
