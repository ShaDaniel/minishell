/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlc_add_op.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 19:34:34 by tjonella          #+#    #+#             */
/*   Updated: 2020/05/24 20:44:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dbl_list_cycl.h"

size_t	ft_dlc_get_size(t_dlc *beg)
{
	t_dlc	*res;
	size_t	qt_elems;

	qt_elems = 0;
	if (beg)
	{
		++qt_elems;
		res = beg->next;
		while (res && res != beg)
		{
			++qt_elems;
			res = res->next;
		}
	}
	return (qt_elems);
}
