/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsamson <fsamson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 16:04:14 by fsamson           #+#    #+#             */
/*   Updated: 2020/12/04 11:09:21 by fsamson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char *c1;
	unsigned char *c2;

	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	while (0 < n--)
	{
		if (*(c1++) != *(c2++))
			return (*(--c1) - *(--c2));
		else if (!(*c1) || !(*c2))
			return (*(c1) - *(c2));
	}
	return (0);
}
