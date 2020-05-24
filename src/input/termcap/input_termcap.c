/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_termcap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <student@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 22:35:41 by ksharlen          #+#    #+#             */
/*   Updated: 2020/05/24 18:59:52 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "input_termcap.h"

void	input_tgetent(t_exec_lst *execlist)
{
	int	ok;

	ok = tgetent(T_BUFFER, sh21_getenv(execlist, "TERM"));
	if (ok != 1)
		input_error_ext("termcap for current terminal not found");
}

char	*input_tgetstr(char *cb)
{
	char	*str;

	str = NULL;
	if (cb)
	{
		str = tgetstr(cb, T_BUFFER);
		ft_chk_null_ptr(str, E_TGETSTR);
	}
	else
		input_error_ext("input_tgetstr: empty cb");
	return (str);
}

char	*input_tgoto(char *cb, int one, int two)
{
	char	*str;

	str = NULL;
	if (cb)
	{
		str = tgoto(cb, one, two);
		ft_chk_null_ptr(str, E_TGOTO);
	}
	else
		input_error_ext("input_tgoto: empty cb");
	return (str);
}

void	input_tputs(const char *str, int affcnt, int (*putc)(int))
{
	(void)affcnt;
	(void)putc;
	if (str)
	{
		ft_putstr(str);
	}
	else
		input_error_ext("input_tputs: empty str");
}

int		input_tgetnum(char *str)
{
	int		val;

	val = -1;
	if (str)
	{
		val = tgetnum(str);
		if (val == -1)
			input_error_ext("input_tgetnum: val = -1");
	}
	else
		input_error_ext("input_tgetnum: empty str");
	return (val);
}
