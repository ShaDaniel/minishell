/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsetalloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 07:42:54 by tjonella          #+#    #+#             */
/*   Updated: 2020/05/24 20:44:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsetalloc(const char sym, size_t size)
{
	char	*new;

	if (size != 0)
	{
		new = (char *)ft_memalloc(sizeof(char) * (size + 1));
		if (!new)
			return (NULL);
		ft_memset(new, sym, size);
		return (new);
	}
	return (NULL);
}
