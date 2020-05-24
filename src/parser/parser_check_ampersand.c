/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_check_ampersand.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjonella <tjonella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 21:25:16 by tjonella          #+#    #+#             */
/*   Updated: 2020/05/24 19:48:14 by tjonella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"

void		parser_check_ampersand(char *splitter, t_pars_list *list)
{
	if (*splitter != '&' || (*splitter == '&' && *(splitter + 1) == '&'))
		return ;
	write_flag_and_nbr_ampersand(list);
}
