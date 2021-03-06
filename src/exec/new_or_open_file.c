/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_or_open_file.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 14:01:17 by tjonella          #+#    #+#             */
/*   Updated: 2020/05/24 20:44:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec.h"

int		new_or_open_file(char *file_name, int flag_open)
{
	int fd;

	flag_open = (flag_open == 1) ? (O_TRUNC) : (O_APPEND);
	if ((fd = open(file_name, O_CREAT | O_RDWR | flag_open,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH)) < 0)
	{
		ft_putstr_fd(STR_ERR_SHELL, STDERR_FILENO);
		ft_putstr_fd("error create file\n", STDERR_FILENO);
		return (-1);
	}
	return (fd);
}
