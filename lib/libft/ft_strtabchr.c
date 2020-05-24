/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtabchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjonella <tjonella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:55:55 by tjonella          #+#    #+#             */
/*   Updated: 2020/05/24 19:47:09 by tjonella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtabchr(const char *str, const char sym)
{
	char	*p_str;

	p_str = NULL;
	if (str && *str)
	{
		while (str && *str && !ft_isspace(*str))
		{
			if (*str == sym)
			{
				p_str = (char *)str;
				break ;
			}
			++str;
		}
	}
	return (p_str);
}
