/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_ctr_t.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjonella <tjonella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 02:21:11 by tjonella          #+#    #+#             */
/*   Updated: 2020/05/24 19:47:09 by tjonella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sh_bonus.h"

/*
**not working
*/

void	input_ctr_t(struct s_input *inp)
{
	if (inp->gap.len_string > 1)
	{
		if (!ft_memcmp(&inp->cr, &inp->save_refresh_pos,
			sizeof(struct s_cursor)))
			inp->cr.x += 2;
		else if (inp->gap.slide != inp->gap.len_string)
		{
			if ((check_line_footnote_down(inp) == FALSE))
				++inp->cr.x;
		}
		gap_swap_two_sym(&inp->gap);
		set_cursor_pos(inp->cr.x, inp->cr.y);
		refresh_screen(inp);
	}
}
