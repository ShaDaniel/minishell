/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 10:21:08 by tjonella          #+#    #+#             */
/*   Updated: 2020/05/24 20:44:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_strings;
	char	*p_dyn;

	p_dyn = NULL;
	if (s1 && s2)
	{
		len_strings = ft_strlen(s1) + ft_strlen(s2);
		p_dyn = ft_strnew(len_strings);
		if (!p_dyn)
			return (NULL);
		ft_strcpy(p_dyn, s1);
		ft_strcat(p_dyn, s2);
	}
	return (p_dyn);
}
