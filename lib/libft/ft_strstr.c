/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjonella <tjonella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 14:49:58 by tjonella          #+#    #+#             */
/*   Updated: 2020/05/24 19:47:09 by tjonella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t		len_haystack;
	size_t		len_needle;
	const char	*ret_str;

	len_haystack = ft_strlen(haystack);
	len_needle = ft_strlen(needle);
	ret_str = haystack;
	if (!len_needle)
		return ((char *)ret_str);
	while (*haystack && (len_haystack-- >= len_needle))
	{
		if (!(ft_memcmp(haystack, needle, len_needle)))
		{
			ret_str = haystack;
			return ((char *)ret_str);
		}
		haystack++;
	}
	return (NULL);
}
