/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_env.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <student@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 17:28:46 by ksharlen          #+#    #+#             */
/*   Updated: 2020/05/24 18:40:58 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sh_init.h"

static void	clean_garbage(struct s_start_env *env)
{
	ft_bzero(env->shlvl, SH21_MAX_PATH);
	ft_bzero(env->term, SH21_MAX_PATH);
	ft_bzero(env->shell, SH21_MAX_PATH);
	ft_bzero(env->old_pwd, SH21_MAX_PATH);
	ft_bzero(env->pwd, SH21_MAX_PATH);
	ft_bzero(env->path, SH21_MAX_PATH);
	ft_bzero(env->home, SH21_MAX_PATH);
	ft_bzero(env->user, SH21_MAX_PATH);
}

static void	set_shlvl(t_exec_lst *execlist, char *shlvl)
{
	char	*p_shlvl;
	char	*ret_itoa;
	int		num_shlvl;

	p_shlvl = sh21_getenv(execlist, "SHLVL");
	if (p_shlvl)
	{
		num_shlvl = ft_atoi(p_shlvl);
		++num_shlvl;
		ret_itoa = ft_itoa(num_shlvl);
		ft_chk_null_ptr(ret_itoa, E_MALLOC);
		sh21_setenv(execlist, "SHLVL", ret_itoa, FLAG_ON);
		ft_strcpy(shlvl, ret_itoa);
		ft_strdel(&ret_itoa);
	}
	else
	{
		sh21_setenv(execlist, "SHLVL", "1", FLAG_ON);
		ft_strcpy(shlvl, "1");
	}
}

void		sh21_init_start_env(t_exec_lst *execlist, struct s_start_env *env,
					const struct s_user_info *user)
{
	char	*buf;

	buf = (char[SH21_MAX_PATH]){0};
	clean_garbage(env);
	sh21_setenv(execlist, "TERM", "xterm-256color", FLAG_OFF);
	ft_strcpy(env->term, sh21_getenv(execlist, "TERM"));
	ft_strcpy(env->user, user->user);
	sh21_setenv(execlist, "USER", user->user, FLAG_ON);
	sh21_setenv(execlist, "SHELL", P_N, FLAG_ON);
	set_shlvl(execlist, env->shlvl);
	ft_strcpy(env->shell, P_N);
	getcwd(buf, SH21_MAX_PATH);
	sh21_setenv(execlist, "PWD", buf, FLAG_ON);
	ft_strcpy(env->pwd, buf);
	ft_strcpy(env->old_pwd, buf);
	sh21_setenv(execlist, "OLD_PWD", buf, FLAG_ON);
	ft_strcpy(env->home, user->home_d);
	sh21_setenv(execlist, "HOME", env->home, FLAG_ON);
}
