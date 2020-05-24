/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iu_pwd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 18:37:28 by tjonella          #+#    #+#             */
/*   Updated: 2020/05/24 20:44:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "internal_utilities.h"

int		sh21_pwd(int argc, char *argv[], char *env[])
{
	char *pwd;

	(void)(argv);
	(void)(env);
	if (argc > 1)
		ft_printf("pwd: %v%s\n", STDERR_FILENO, S_TOO_MANY);
	else
	{
		pwd = (char[MAX_SIZE_PATH + 1]){0};
		if (getcwd(pwd, MAX_SIZE_PATH))
		{
			ft_printf("%s\n", pwd);
			return (0);
		}
	}
	return (-1);
}
