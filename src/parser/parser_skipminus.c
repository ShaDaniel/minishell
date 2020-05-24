/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_skipminus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelphia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 19:43:16 by mdelphia          #+#    #+#             */
/*   Updated: 2020/03/10 19:43:19 by mdelphia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*parser_skipminus(char *str)
{
	while (str && *str == -1)
		++str;
	return (str);
}
