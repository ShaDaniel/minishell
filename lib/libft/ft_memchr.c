/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 13:57:51 by tjonella          #+#    #+#             */
/*   Updated: 2020/05/24 20:44:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	t_byte_shift;
	void	*p_str;
	short	flag_find;

	flag_find = 0;
	t_byte_shift = 0;
	while (t_byte_shift < n)
	{
		if (*((unsigned char *)s + t_byte_shift) == (unsigned char)c)
		{
			p_str = ((unsigned char *)s + t_byte_shift);
			t_byte_shift = n;
			flag_find = 1;
		}
		else
			++t_byte_shift;
	}
	if (!flag_find)
		return (NULL);
	return (p_str);
}
