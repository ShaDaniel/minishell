/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_additional_modes.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjonella <tjonella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 16:03:00 by tjonella          #+#    #+#             */
/*   Updated: 2020/05/24 19:47:09 by tjonella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "input_parse_key.h"

void	input_additional_modes(t_exec_lst *execlist, struct s_input *inp)
{
	if (inp->str_for_parse)
	{
		input_quote_mode(execlist, inp);
	}
}
