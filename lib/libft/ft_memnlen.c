/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjonella <tjonella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 17:46:14 by tjonella          #+#    #+#             */
/*   Updated: 2020/05/24 19:47:09 by tjonella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_memnlen(const void *s, int n, size_t size)
{
	size_t	len;
	size_t	i;

	len = 0;
	if (s)
	{
		i = 0;
		while (i < size)
		{
			if (((unsigned char *)s)[i] == n)
				return (len);
			++len;
			++i;
		}
	}
	return (len);
}
