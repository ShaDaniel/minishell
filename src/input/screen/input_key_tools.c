/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_key_tools.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjonella <tjonella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 20:32:10 by tjonella          #+#    #+#             */
/*   Updated: 2020/05/24 19:47:09 by tjonella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "input_parse_key.h"

struct s_cursor	input_get_end_string(struct s_input *inp)
{
	struct s_cursor	end;

	end.y = inp->save_refresh_pos.y +
		(inp->greet.len + inp->gap.len_string) / inp->win.cols;
	end.x = (inp->greet.len + inp->gap.len_string) % inp->win.cols;
	return (end);
}
