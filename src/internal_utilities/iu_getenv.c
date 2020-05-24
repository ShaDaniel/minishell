/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iu_getenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjonella <tjonella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 18:37:15 by tjonella          #+#    #+#             */
/*   Updated: 2020/05/24 19:47:09 by tjonella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "internal_utilities.h"

char		*sh21_getenv(t_exec_lst *execlist, const char *name)
{
	char	**p_env;
	char	*p_ret;
	size_t	len_name;

	p_env = NULL;
	p_ret = NULL;
	if (name && *name)
	{
		len_name = ft_strnlen(name, '=');
		p_env = execlist->sh_environ;
		while (p_env && *p_env)
		{
			if (!ft_memcmp(name, *p_env, len_name) &&
				*((*p_env) + len_name) == '=')
			{
				p_ret = ft_strchr(*p_env, '=') + 1;
				break ;
			}
			++p_env;
		}
	}
	return (p_ret);
}
