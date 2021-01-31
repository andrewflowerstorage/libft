/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsamson <fsamson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 08:58:18 by fsamson           #+#    #+#             */
/*   Updated: 2020/11/02 10:07:44 by fsamson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*v;
	size_t			i;

	v = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (v[i] == (unsigned char)c)
			return ((void *)&v[i]);
		i++;
	}
	return (NULL);
}
