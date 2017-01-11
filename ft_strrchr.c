/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 21:32:47 by bschroed          #+#    #+#             */
/*   Updated: 2017/01/10 21:32:52 by bschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char	*d;
	int		len;

	d = (char *)s;
	len = ft_strlen(s);
	while (len >= 0)
	{
		if (d[len] == (char)c)
			return (d + len);
		len--;
	}
	return (NULL);
}
