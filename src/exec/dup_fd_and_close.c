/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dup_fd_and_close.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjonella <tjonella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 11:42:17 by tjonella          #+#    #+#             */
/*   Updated: 2020/05/24 19:48:14 by tjonella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec.h"

int		dup_fd_and_close(int fd, int dup_fd)
{
	if (fd != dup_fd)
	{
		if (dup2(fd, dup_fd) < 0)
			return (1);
		close(fd);
	}
	return (0);
}
