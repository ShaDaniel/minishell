/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 09:58:13 by tjonella          #+#    #+#             */
/*   Updated: 2020/05/24 20:44:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*p_dyn;
	size_t	i;

	p_dyn = NULL;
	if (s)
	{
		i = 0;
		p_dyn = ft_strnew(len);
		if (!p_dyn)
			return (NULL);
		ft_bzero(p_dyn, len);
		while (i < len)
		{
			p_dyn[i] = s[start];
			i++;
			start++;
		}
	}
	return (p_dyn);
}
