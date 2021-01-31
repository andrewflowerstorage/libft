/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsamson <fsamson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 11:14:28 by fsamson           #+#    #+#             */
/*   Updated: 2020/11/12 10:08:55 by fsamson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s1;
	int		len;

	s1 = (char *)s;
	len = 0;
	while (s1[len])
		len++;
	while (s1[len] != c && len != 0)
		len--;
	if (s1[len] == c)
		return (&s1[len]);
	else
		return (NULL);
}
