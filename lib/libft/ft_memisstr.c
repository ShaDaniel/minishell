/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memisstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 14:36:55 by tjonella          #+#    #+#             */
/*   Updated: 2020/05/24 20:44:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memisstr(const char *str, const char *chek_format, size_t size)
{
	if (size <= ft_strlen(str) && size > 0)
	{
		while (*str && size--)
		{
			if (ft_ischar(chek_format, *str))
				return (1);
			str++;
		}
	}
	return (0);
}
