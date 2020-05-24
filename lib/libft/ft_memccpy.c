/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 13:57:38 by tjonella          #+#    #+#             */
/*   Updated: 2020/05/24 20:44:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int ch, size_t n)
{
	size_t		i;
	void		*p_ch;
	int			next_elem_after_ch;

	next_elem_after_ch = 1;
	p_ch = NULL;
	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)src + i) == (unsigned char)ch)
		{
			*((unsigned char *)dest + i) = (unsigned char)ch;
			p_ch = (unsigned char *)dest + i + next_elem_after_ch;
			i = n;
		}
		else
		{
			*((unsigned char *)dest + i) = *((unsigned char *)src + i);
			++i;
		}
	}
	return ((unsigned char *)p_ch);
}
