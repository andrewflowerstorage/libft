/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsamson <fsamson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 17:02:45 by fsamson           #+#    #+#             */
/*   Updated: 2020/11/08 13:49:19 by fsamson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	length_src;
	size_t	i;

	if (!dest || !src)
		return (0);
	length_src = 0;
	while (src[length_src])
		length_src++;
	if (n)
	{
		i = -1;
		if (length_src + 1 < n)
			while (++i < length_src)
				dest[i] = src[i];
		else
			while (++i < n - 1)
				dest[i] = src[i];
		dest[i] = '\0';
	}
	return (length_src);
}
