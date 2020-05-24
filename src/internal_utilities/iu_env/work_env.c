/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   work_env.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjonella <tjonella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 22:16:28 by tjonella          #+#    #+#             */
/*   Updated: 2020/05/24 19:47:09 by tjonella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "internal_utilities.h"

struct s_nameval	split_name_val(const char *nameval)
{
	struct s_nameval	nval;
	size_t				len_name;

	nval.name = NULL;
	nval.value = NULL;
	if (nameval && *nameval)
	{
		len_name = ft_strnlen(nameval, '=');
		nval.name = ft_strsub(nameval, 0, len_name);
		nval.value = ft_strtabdup(nameval + len_name + 1);
	}
	return (nval);
}

void				work_opt(t_exec_lst *execlist,
						char *const *p_argv, t_env *env)
{
	if (*p_argv && !ft_strcmp(*p_argv, "-i"))
	{
		ft_strdel_split(execlist->sh_environ);
		free(execlist->sh_environ);
		execlist->sh_environ = (char **)ft_memalloc(sizeof(char *));
		execlist->sh_environ[0] = NULL;
		++p_argv;
	}
	if (p_argv && *p_argv && !ft_strcmp(*p_argv, "-P"))
	{
		++p_argv;
		env->path_exec = *p_argv;
		env->opt |= F_P;
		if (*p_argv)
			p_argv++;
	}
	if (p_argv && *p_argv)
		p_argv = change_value_name(execlist, p_argv);
	if (p_argv && *p_argv && !ft_strcmp(*p_argv, "-u"))
		p_argv = u_flag(execlist, ++p_argv);
}
