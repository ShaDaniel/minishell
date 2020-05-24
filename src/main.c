/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <student@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 16:55:32 by ksharlen          #+#    #+#             */
/*   Updated: 2020/05/22 19:16:18 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sh.h"

static void	sh21_finish(char **sh_environ)
{
	ft_strdel_split(sh_environ);
}

int			main(int argc, char **argv, char **env)
{
	t_init			init;

	(void)(argc);
	(void)(argv);
	(void)(env);
	sh21_init(&init, env, &init.execlist);
	while (1)
	{
		input_begin(&init.execlist, &init.inp);
		if ((!init.inp.str_for_parse && init.inp.key == ('d' & 0x1f)))
			break ;
		else if (init.inp.str_for_parse &&
			!parser(&init.execlist, &(init.inp.str_for_parse), &init.prs))
			check_choice(&init.execlist, init.prs.beg);
		free_befor_exec(&init.prs);
	}
	input_finish(&init.inp);
	sh21_finish(init.execlist.sh_environ);
	return (0);
}
