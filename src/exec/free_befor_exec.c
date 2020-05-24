/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_befor_exec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 15:51:19 by tjonella          #+#    #+#             */
/*   Updated: 2020/05/24 20:44:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec.h"

void	free_befor_exec(t_info_parser *prs)
{
	if (prs->beg)
		free_pars_list(&prs->beg);
	prs->beg = NULL;
	prs->end = NULL;
}
