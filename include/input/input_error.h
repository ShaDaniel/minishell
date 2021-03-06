/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_error.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 23:28:48 by tjonella          #+#    #+#             */
/*   Updated: 2020/05/24 20:44:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INPUT_ERROR_H
# define INPUT_ERROR_H

# include <sys/types.h>
# include <unistd.h>

# include "libft.h"

void	input_error(const char *str);
void	input_error_ext(const char *str);
void	print_sig_error(char *lvl, pid_t pid, char *err, char *file);

#endif
