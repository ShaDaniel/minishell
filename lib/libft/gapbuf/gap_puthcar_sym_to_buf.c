/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gap_puthcar_sym_to_buf.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 18:23:44 by tjonella          #+#    #+#             */
/*   Updated: 2020/05/24 20:44:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gap_buf.h"

static void		gap_put_sym_in_str(t_gapbuf *buf, char sym)
{
	gapbuf_move_to_slide(buf);
	buf->buf[buf->gap_start++] = sym;
	buf->len_string++;
	if (buf->size_gap_buf)
		buf->size_gap_buf--;
	if (!buf->size_gap_buf)
		get_new_gapbuf(buf, buf->main_size_gap_buf);
	buf->slide++;
}

void			gap_put_end_str(t_gapbuf *buf, char sym)
{
	if (buf->gap_start == (buf->len_string + 1))
	{
		buf->buf[buf->len_string] = sym;
		++buf->gap_start;
		++buf->gap_end;
	}
	else if (buf->gap_start < (buf->len_string + buf->size_gap_buf))
		buf->buf[buf->len_string + buf->size_gap_buf] = sym;
	buf->slide++;
	buf->len_string++;
}

void			gap_putchar_in_buf(t_gapbuf *buf, char sym)
{
	if ((buf->len_string + buf->size_gap_buf) < buf->size_buf)
	{
		if (buf->slide == buf->len_string)
			gap_put_end_str(buf, sym);
		else
			gap_put_sym_in_str(buf, sym);
	}
	else
		die_gap("t_gapbuf: overflow buf");
}
