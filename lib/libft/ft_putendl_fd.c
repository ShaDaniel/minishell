/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjonella <tjonella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 17:20:42 by tjonella          #+#    #+#             */
/*   Updated: 2020/05/24 19:47:09 by tjonella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	if (s)
		if (fd >= 0 && fd < 7169)
		{
			ft_putstr_fd(s, fd);
			ft_putchar_fd('\n', fd);
		}
}
