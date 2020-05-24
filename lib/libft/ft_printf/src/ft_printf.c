/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjonella <tjonella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 07:55:41 by tjonella            #+#    #+#             */
/*   Updated: 2020/05/24 19:45:27 by tjonella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_spec			g_spec;

int				ft_printf(const char *format, ...)
{
	va_list		form;
	int			ret;

	g_spec.ret_printf = 0;
	g_spec.fd = 1;
	g_spec.size_write = 0;
	g_spec.shift_spec = 0;
	g_spec.size_buf = SIZE_BUF;
	va_start(form, format);
	work_to_format(format, form);
	if (g_spec.size_write)
		write_buf_and_clean(WRITE_BUF);
	va_end(form);
	ret = g_spec.ret_printf;
	g_spec.ret_printf = 0;
	g_spec.fd = 1;
	g_spec.spec = 0;
	return (ret);
}
