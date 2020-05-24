/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstreplace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjonella <tjonella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 01:28:22 by tjonella          #+#    #+#             */
/*   Updated: 2020/05/24 19:47:09 by tjonella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstreplace(t_list **rep, void *content, size_t content_size)
{
	void	*tmp;

	if (rep)
		if (*rep && content)
		{
			tmp = (*rep)->content;
			(*rep)->content = malloc(content_size);
			if (!(*rep))
				return (NULL);
			ft_memcpy((*rep)->content, content, content_size);
			(*rep)->content_size = content_size;
			ft_memdel(&tmp);
			return (*rep);
		}
	return (NULL);
}
