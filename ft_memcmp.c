/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsamson <fsamson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 08:58:01 by fsamson           #+#    #+#             */
/*   Updated: 2020/11/02 10:07:58 by fsamson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *v1;
	unsigned char *v2;

	v1 = (unsigned char *)s1;
	v2 = (unsigned char *)s2;
	while (0 < n--)
		if (*(v1++) != *(v2++))
			return (*(--v1) - *(--v2));
	return (0);
}
