/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iu_init_var_env.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjonella <tjonella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 18:37:20 by tjonella          #+#    #+#             */
/*   Updated: 2020/05/24 19:47:09 by tjonella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "internal_utilities.h"

void	print_env(t_exec_lst *execlist)
{
	char	**p_environ;
	char	*str;

	p_environ = execlist->sh_environ;
	while (p_environ && *p_environ)
	{
		str = (*p_environ);
		ft_printf("%s\n", str);
		++p_environ;
	}
}

void	clean_env(t_exec_lst *execlist)
{
	ft_strdel_split(execlist->sh_environ);
}

void	init_env(t_exec_lst *execlist, char **env)
{
	if (env && *env)
		execlist->sh_environ = ft_linedup(env);
	else
	{
		execlist->sh_environ = (char **)ft_memalloc(sizeof(char *) * 1);
		execlist->sh_environ[0] = NULL;
	}
}
