/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linedup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjonella <tjonella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 23:16:53 by tjonella          #+#    #+#             */
/*   Updated: 2020/05/24 19:47:09 by tjonella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_linedup(char *const *line)
{
	size_t	len_line;
	char	**new_line;
	char	**p_new_line;

	new_line = NULL;
	if (line && *line)
	{
		len_line = ft_lineslen(line);
		new_line = (char **)ft_memalloc(sizeof(char *) * (len_line + 1));
		p_new_line = new_line;
		while (*line)
		{
			*p_new_line = ft_strdup(*line);
			++p_new_line;
			++line;
		}
		new_line[len_line] = NULL;
	}
	return (new_line);
}
