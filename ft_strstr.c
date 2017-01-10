/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/08 21:53:53 by bschroed          #+#    #+#             */
/*   Updated: 2017/01/08 21:53:54 by bschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strstr(const char *big, const char *little)
{
	char c;
	size_t len;

	c = *little++;
	if (!c)
		return ((char *) big);

	len = ft_strlen(little);
	while (ft_strncmp(big, little, len) != 0)
	{
		char sc = '\0';
		while (sc != c)
		{
			sc = *big++;
			if (!sc)
				return ((char *) 0);
		}
	}
	return ((char *) (big - 1));
}
