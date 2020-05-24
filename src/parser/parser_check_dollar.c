/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_check_dollar.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelphia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 11:41:27 by mdelphia          #+#    #+#             */
/*   Updated: 2020/04/09 22:54:20 by mdelphia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"

static int	check_and_fill_flag_dollar(char *str, t_pars_list *list)
{
	if (*str == '$' && *(str - 1) != '\\' &&
		(ft_isalpha(*(str + 1)) || ft_isdigit(*(str + 1))))
	{
		list->f_delimiter |= V_DOLLAR;
		return (1);
	}
	return (0);
}

void		parser_check_dollar(char *str, t_pars_list *list, char *splitter)
{
	while (str < splitter)
	{
		if (check_and_fill_flag_dollar(str, list))
			break ;
		++str;
	}
}
