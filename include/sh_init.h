/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sh_init.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjonella <tjonella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 03:09:54 by tjonella          #+#    #+#             */
/*   Updated: 2020/05/24 19:47:09 by tjonella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SH_INIT_H
# define SH_INIT_H

# include <sys/types.h>
# include <unistd.h>
# include <limits.h>
# include <stdlib.h>
# include <pwd.h>

# include "libft.h"
# include "sh_limits.h"
# include "sh_struct.h"
# include "internal_utilities.h"
# include "input_init.h"

void			sh21_init(t_init *initi, char **env, t_exec_lst *execlist);
void			sh21_init_start_env(t_exec_lst *execlist,
					struct s_start_env *env, const struct s_user_info *user);
void			get_struct_for_input(struct s_input *inp, t_init *init);

#endif
